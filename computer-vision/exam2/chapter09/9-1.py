import numpy as np
import cv2 as cv

def sobel_derivative():
    src = cv.imread('lenna.bmp', cv.IMREAD_GRAYSCALE)

    if src is None:
        print('Image load failed')
        return

    mx = np.array([[-1, 0, 1],
                   [-2, 0, 3],
                   [-1, 0, 1]
                   ], dtype=np.float32)
    my = np.array([[-1, -2, -1],
                   [0, 0, 0],
                   [1, 2, 1]
                   ], dtype=np.float32)

    dx = cv.filter2D(src, -1, mx, delta=128)
    dy = cv.filter2D(src, -1, my, delta=128)


    cv.imshow('src', src)
    cv.imshow('dx', dx)
    cv.imshow('dy', dy)
    cv.waitKey(0)
    cv.destroyAllWindows()

print(sobel_derivative())