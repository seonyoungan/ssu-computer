import numpy as np
import cv2 as cv

src = cv.imread('sample.jpg', cv.IMREAD_GRAYSCALE) # sample.jpg를 회색조 로드

#이미지 불러오기를 실패하는 경우
if src is None:
    print('image is failed')
    exit()

dst = np.empty(src.shape, dtype=src.dtype)
average = np.mean(src)
for y in range(src.shape[0]):
    for x in range(src.shape[1]):
        if src[y,x] < average: #평균보다 어두우면
            src[y,x] = 0 # 0으로 바꾼다.

cv.imwrite('output.jpg', src) # 결과 저장
cv.waitKey()  # 키누를때까지 기다리게하기
cv.destroyAllWindows() # 종료
