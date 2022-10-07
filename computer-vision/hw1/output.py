import numpy as np
import cv2 as cv

src = cv.imread('sample.jpg', cv.IMREAD_GRAYSCALE) #회색조 로드

def saturated(value):
    if value > 255:
        value = 255
    elif value < 0:
        value = 0
    return value


if src is None:
    print('image is failed')
    exit()

dst = np.empty(src.shape, dtype=src.dtype)
for y in range(src.shape[0]):
    for x in range(src.shape[1]):
    ##평균밝기 구해서 그 이하면 어두운 픽셀만들게 다시해야할듯
    #dst[y, x] = saturated(src[y, x] + 100) # 밝기에 100을 더해 큰 값을 만들어서 0과 가까운 어두운 픽셀로 만들기

cv.imwrite('output.jpg', dst)
cv.waitKey()  # 키누를때까지 기다리게하기
cv.destroyAllWindows() # 종료
