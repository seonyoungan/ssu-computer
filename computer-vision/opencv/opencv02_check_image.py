import numpy as np
import cv2 as cv

def check_image():
    img1 = cv.imread('lenna.png', cv.IMREAD_GRAYSCALE)  # 흑백 로드
    if img1 is None:
        print("image load failed")
        return
    print('type(img): ', type(img1)) # 타입 확인
    print('img.shape: ', img1.shape) # width, height 크기

    if len(img1.shape) == 2: # 0,1
        print('img1 is a grayscale image')
    elif len(img1.shape) == 3: # b, g, r
        print('img2 is a truecolor image')
    cv.imshow('img1', img1)
    cv.waitKey()
    cv.destroyAllWindows()

def check_matrix() :
    # img1 = p.empty((512, 512), np.uint8)  # grayscale
    # img1 = np.zeros((512, 512, 3), np.unit8)  # color image
    # img1 = np.ones((512, 512), np.int32)  # 1차원 배열
    # img1 = np.full((512, 512), np.float32)  # fill 0,0


    # mp
    mat1 =np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]]).astype(np.unit8)

    mat1[0, 1] = 100
    mat1[2, :] = 200 #브로드 캐스트

    print(mat1)

check_image()
check_matrix()