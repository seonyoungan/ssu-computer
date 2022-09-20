import cv2 as cv

# 1. hello world
print("hello openCV", cv.__version__)


# 2. load a image
img = cv.imread('lenna.png',) # read, 참고로 이미지를 불러올 때 컬러, 그레이스케일, 방향정보 등을 지정할 수 있음
if img is None:
    print('Image load failed!')
    exit()

cv.imshow('image', img) # show
cv.imwrite('save_image.png', img) #save
cv.waitKey() # 키가 눌리면 종료됨