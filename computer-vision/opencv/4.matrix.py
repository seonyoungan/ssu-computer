import numpy as np
import cv2 as cv

print("1. 행렬초기화")
def func1():

    img1 = np.empty((8, 8), np.uint8) # grayscale image
    img2 = np.zeros((8, 8, 3), np.uint8) # color image
    img3 = np.ones((8, 8), np.int32) # 1로 초기화된 배열을 생성한다.
    img4 = np.full((8, 8), 0, np.float32) # 0.0로 배열을 체워라!

    mat1 = np.array([[11, 12, 13, 14],
                     [21, 22, 23, 24],
                     [31, 32, 33, 34]
                     ]).astype(np.uint8)

    # mat1[y, x]
    mat1[0, 1] = 100 # 12 -> 100
    mat1[2, :] = 200 # 2번째행 200 200 200 200

    print(img1)
    print(img2)
    print(img3)
    print(img4)
    print(mat1)

func1()

print("\n\n2. 행렬복사")
def func2():
    nums = np.array([1,4,2,5,3])
    ref = nums[1:4] #참조
    cpy = nums[1:3].copy() #얕은 복사

    print(ref) # 4 2 5
    print(cpy) # 4 2

    nums[2] =10
    print(ref) # 4 10 5
    print(cpy) # 4 2

func2()

print("\n\n3. 행렬 복사")
def func3():
    img1 = cv.imread('cat.jpeg')
    img2 = img1 # 참조
    img3 = img1.copy() # 얕은 복사

    img1[:,:] = (0, 255, 255) # yellow

    cv.imshow('img1', img1) # yellow
    cv.imshow('img2', img2) # yellow
    cv.imshow('img3', img3) # color image
    cv.waitKey()
    cv.destroyAllWindows()

func3()
