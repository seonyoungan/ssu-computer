import cv2 as cv
import numpy as np

def dice():
    src = cv.imread('image/case2/model.png', cv.IMREAD_GRAYSCALE)
    if src is None:
        print('Image load failed')
        return

    _, src = cv.threshold(src, 0, 255, cv.THRESH_BINARY | cv.THRESH_OTSU)
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

dice()