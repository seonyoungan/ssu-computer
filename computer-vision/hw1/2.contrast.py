import numpy as np
import cv2 as cv

src = cv.imread('sample.jpg', cv.IMREAD_GRAYSCALE)  # sample.jpg를 회색조 로드
average = np.mean(src) #일정하게 곱하기
value = 2.0 # 계수

#이미지 불러오기를 실패하는 경우
if src is None:
    print('image is failed')
    exit()

#constrast 효과
src = cv.convertScaleAbs(src, alpha=value+1, beta=-average*value) # 포화 연산

cv.imwrite('contrast.jpg', src) # 결과 저장
cv.waitKey()  # 키누를때까지 기다리게하기
cv.destroyAllWindows() # 종료