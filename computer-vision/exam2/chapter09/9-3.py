import numpy as np
import cv2 as cv

def canny_edge():
    src = cv.imread('lenna.bmp', cv.IMREAD_GRAYSCALE)

    if src is None:
        print('Image load failed')
        return


    dst1 = cv.Canny(src, 50, 100)
    dst2 = cv.Canny(src, 50, 150)

    cv.imshow('src',src)
    cv.imshow('dst1',dst1)
    cv.imshow('dst2',dst2)
    cv.waitKey()
    cv.destroyAllWindows()


print(canny_edge())