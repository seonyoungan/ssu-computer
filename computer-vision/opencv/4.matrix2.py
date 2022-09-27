import numpy as np
import cv2 as cv

print("\n\n4. 부분 행렬 추출")
def func4():
    img1 = cv.imread('cat.jpeg', cv.IMREAD_GRAYSCALE)

    img2 = img1[200:400, 200:400] # img1의 [200:400, 200:400] 부분 참조
    img3 = img1[200:400, 200:400].copy() # img1의 [200:400, 200:400] 부분 얕은 복사

    # 원본이 밝아짐
    img2 += 20 # 특정 범위 이상이면 왜이러지?싶게 이미지가 변한다.

    cv.imshow('img1', img1)
    cv.imshow('img2', img2)
    cv.imshow('img3', img3)
    cv.waitKey()
    cv.destroyAllWindows()

func4()

print("\n\n5. 행렬 연산")

def func5():
    img4 = cv.imread('cat.jpeg')
    img5 = 255 - img4[200:800, 200:800]
    img6 = img4[200:800, 200:800].copy()

    img4[200:800, 200:800] = img5
    cv.imshow('img4', img4)
    cv.imshow('img5', img5)
    cv.imshow('img6', img6)
    cv.waitKey()
    cv.destroyAllWindows()

func5()

def func6():
    mat1 = np.ones((3, 4), np.int32)
    # [[1 1 1 1]
    #  [1 1 1 1]
    #  [1 1 1 1]]

    mat2 = np.arange(12).reshape(3, 4)
    # [[0 1 2 3]
    #  [4 5 6 7]
    #  [8 9 10 11]]
    mat3 = mat1 + mat2
    # [[1 2 3 4]
    #  [5 6 7 8]
    #  [9 10 11 12]]

    mat4 = mat2 * 2
    # [[0 2 4 6]
    #  [8 10 12 14]
    #  [16 18 20 22]]

    print("mat1: ")
    print(mat1)
    print("mat2: ")
    print(mat2)
    print("mat3: ")
    print(mat3)
    print("mat4: ")
    print(mat4)

func6()