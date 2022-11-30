import numpy as np
import cv2 as cv

def func1():
    img1 = cv.imread('cat.jpeg', cv.IMREAD_GRAYSCALE) # 회색조로드

    if img1 is None:
        print('failed!')
        return

    print('type(img1):', type(img1))
    print('img1.shape: ', img1.shape)

    # shape의 len으로 타입 확인을 할 수 있다.
    if len(img1.shape) == 2: # 회색조 0, 1
        print('img1 is a grayscale image')
    elif len(img1.shape) == 3: # 컬러 B, G, R
        print('img1 is a color image')

    cv.imshow('img1', img1) # 이미지 보여 주기
    cv.waitKey() # 키누를때까지 기다리게하기
    cv.destroyAllWindows() # 종료

func1() #호출

