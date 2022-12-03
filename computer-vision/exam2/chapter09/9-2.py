import numpy as np
import cv2 as cv

def sobel_edge():
    src = cv.imread('lenna.bmp', cv.IMREAD_GRAYSCALE)

    if src is None:
        print('Image load failed')
        return

    dx = cv.Sobel(src, cv.CV_32F, 1,0)
    dy = cv.Sobel(src, cv.CV_32F, 0,1)

    fmag = cv.magnitude(dx,dy)
    mag = np.uint8(np.clip(fmag, 0, 255))
    _, edge = cv.threshold(mag, 150, 255, cv.THRESH_BINARY)

    cv.imshow('src', src)
    cv.imshow('mag', mag)
    cv.imshow('edge', edge)
    cv.waitKey(0)
    cv.destroyAllWindows()

print(sobel_edge())