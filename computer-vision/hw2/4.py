import cv2 as cv
import numpy as np
import math


# ppt참고 10.color image processing
# 검출한 객체의 외곽선 정보 사각형 판단하여 화면에 표시되도록
def set_label(img, pts, label):
    (x,y,w,h) = cv.boundingRect(pts)
    pt1 = (x,y)
    pt2 = (x+w, y+h)
    cv.rectangle(img, pt1, pt2, (0, 0, 255), 1)
    cv.putText(img, label, pt1, cv.FONT_HERSHEY_PLAIN, 1, (0, 0, 255))

def contouring(dst,img, bgr_inverse):
    contours, _ = cv.findContours(bgr_inverse, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_NONE)
    for pts in contours:
        if cv.contourArea(pts) < 50:
            continue

        approx = cv.approxPolyDP(pts, cv.arcLength(pts, True)*0.02, True)
        vtc = len(approx)

        if vtc == 3:
            set_label(img, pts, 'TRI')
        elif vtc == 4:
            set_label(img, pts, 'RECT')
        else:
            lenth = cv.arcLength(pts, True)
            area = cv.contourArea(pts)
            ratio = 1.*math.pi*area/(lenth * lenth)

            if ratio > 0.18:
                cv.drawContours(dst, pts, 0, (128, 128, 128), 5)
                set_label(img, pts, 'CIR')

def read_dice():
    # 이미지를 바꾸면 그에 맞는 결과값이 콘솔로 출력된다.
    src = cv.imread('image/case4/img4_3.png', cv.IMREAD_COLOR)
    if src is None:
        print('Image load failed')
        return


    dst = cv.imread('image/case4/img4_3.png', cv.IMREAD_COLOR)
    if dst is None:
        print('Image load failed')
        return
    # ppt참고 7.filtering
    # 언샤프드
    for sigma in range(1, 6):
        blurred = cv.GaussianBlur(src, (0, 0), sigma)
        alpha = 2.0
        dst = cv.addWeighted(src, 1+alpha, blurred, -alpha, 0.0)
    # 양방향필터 블러링 -> 엣지보존

    dst_a = cv.GaussianBlur(dst, (0, 0), 4)
    dst_b = cv.bilateralFilter(dst_a, -1, 10, 0)

    b = cv.split(dst_b)[0]
    g = cv.split(dst_b)[1]
    r = cv.split(dst_b)[2]

    b_rect = cv.threshold(b, 190, 255, 1)
    g_rect = cv.threshold(g, 165, 255, 1)
    r_rect = cv.threshold(r, 168, 255, 1)
    b_inverse = ~b_rect[1]
    g_inverse = ~g_rect[1]
    r_inverse = ~r_rect[1]

    bgr_inverse = b_inverse + g_inverse + r_inverse

    contouring(bgr_inverse,b_rect[1], b_inverse)
    contouring(bgr_inverse,g_rect[1], g_inverse)
    contouring(bgr_inverse,r_rect[1], r_inverse)
    #cv.imshow('test1',bgr_rect)
    #cv.imshow('test2', bgr_inverse)


    contours, hierarchy = cv.findContours(bgr_inverse, cv.RETR_TREE, cv.CHAIN_APPROX_NONE)
    dice = []
    index = 0
    counter = 1
    while index > -1:
        number = 0
        while counter < len(contours):
            if hierarchy[0,counter,3] <0:
                number+=1
                counter+=1
                continue
            counter+=1
            break
        dice.append(number)
        cv.drawContours(bgr_inverse, contours, index, (128, 128, 128), 3, cv.LINE_8, hierarchy) #외곽선
        index = hierarchy[0,index,0] # 다음번에 그려질 외곽선 위치 담음

    dice.sort()
    print(*dice, sep=', ')
    cv.imshow("src",src)
    cv.imshow("dst", bgr_inverse)
    cv.waitKey()
    cv.destroyAllWindows()

read_dice()