import numpy as np
import cv2 as cv

def hough_circles():
    src = cv.imread('coins.png', cv.IMREAD_GRAYSCALE)

    if src is None:
        print('Image load failed')
        return

    blurred = cv.blur(src, (3,3)) #잡음 제거 용도
    circles = cv.HoughCircles(blurred, cv.HOUGH_GRADIENT, 1, 50, param1=150, param2=30)
    #두 원의 중심점 거리가 50픽셀보다 작으면 검출안함
    # 높은 임계값 150, 축적 배열의 원소값이 30보다 크면 원의 중심점으로 선택하도록

    dst = cv.cvtColor(src, cv.COLOR_GRAY2BGR)

    if circles is not None: #빨갛게 표시
        for i in range(circles.shape[1]):
            cx, cy, radius = circles[0][i]
            cv.circle(dst, (int(cx), int(cy)), int(radius), (0,0,255), 2, cv.LINE_AA)

    cv.imshow('src', src)
    cv.imshow('dst', dst)
    cv.waitKey()
    cv.destroyAllWindows()

print(hough_circles())