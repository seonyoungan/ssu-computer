import numpy as np
import cv2 as cv
import math
def hough_line_segments():
    src = cv.imread('building.jpg', cv.IMREAD_GRAYSCALE)

    if src is None:
        print('Image load failed')
        return

    edge = cv.Canny(src,50,150)
    lines = cv.HoughLinesP(edge, 1, math.pi / 180, 160, minLineLength=50, maxLineGap=5)

    dst = cv.cvtColor(edge, cv.COLOR_GRAY2BGR)

    if lines is not None: #직선이 있는 위치만 선분 그렸는지 확인
        for i in range(lines.shape[0]):
            pt1 = (lines[i][0][0], lines[i][0][1])
            pt2 = (lines[i][0][2], lines[i][0][3])
            cv.line(dst, pt1, pt2, (0,0,255), 2, cv.LINE_AA) #빨간선으로 표시

    cv.imshow('src',src)
    cv.imshow('dst',dst)
    cv.waitKey()
    cv.destroyAllWindows()

print(hough_line_segments())