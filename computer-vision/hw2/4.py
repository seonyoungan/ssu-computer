import cv2 as cv
import numpy as np

def read_dice():
    # 이미지를 바꾸면 그에 맞는 결과값이 콘솔로 출력된다.
    src = cv.imread('image/case4/img4_3.png', cv.IMREAD_GRAYSCALE)
    if src is None:
        print('Image load failed')
        return
    # #명암비
    # alpha = 0.5
    # src = cv.convertScaleAbs(src, alpha=1+alpha, beta=-128*alpha)
    #
    # # 양방향필터 블러링 -> 엣지보존
    src = cv.GaussianBlur(src, (0, 0), 2)
    src = cv.bilateralFilter(src, -1, 10, 0)

    _, src = cv.threshold(src, 0, 255, cv.THRESH_BINARY_INV | cv.THRESH_OTSU)
    contours, hierarchy = cv.findContours(src, cv.RETR_CCOMP, cv.CHAIN_APPROX_NONE) # 계층구조로 외곽선 검출

    dst = cv.cvtColor(src, cv.COLOR_GRAY2BGR) #컬러 변환

    dice = []
    index = 0
    counter = 1
    while index > -1:
        number = 0
        while counter < len(contours):
            if hierarchy[0,counter,2] <0:
                number+=1
                counter+=1
                continue
            counter+=1
            break
        dice.append(number)
        cv.drawContours(dst, contours, index, (128, 255, 128), 3, cv.LINE_8, hierarchy)
        index = hierarchy[0,index,0] #다음번에 그려질 외곽선 위치 담음
    cv.imshow("dst", dst)

    dice.sort()
    print(*dice, sep=', ')
    cv.waitKey()
    cv.destroyAllWindows()

read_dice()