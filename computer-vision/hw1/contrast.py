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
       dst[y, x] = saturated(src[y, x] + (src[y, x] - 128) * 2.0)

cv.imwrite('constrast.jpg', dst)
cv.waitKey()  # 키누를때까지 기다리게하기
cv.destroyAllWindows() # 종료
