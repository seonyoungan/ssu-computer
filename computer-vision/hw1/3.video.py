import cv2 as cv
import numpy as np
import time

cap = cv.VideoCapture('video.mp4')

#영상이 열리지 않을 경우
if not cap.isOpened():
    print("Video open failed")
    exit()

#동영상 기본 설정
w = round(cap.get(cv.CAP_PROP_FRAME_WIDTH))
h = round(cap.get(cv.CAP_PROP_FRAME_HEIGHT))
fps = cap.get(cv.CAP_PROP_FPS)
fourcc = cv.VideoWriter_fourcc(*'mp4v')
delay = round(1000 / fps)
output_video = cv.VideoWriter('output.mp4', fourcc, fps, (w, h))  # 클래스 초기화

#과제3
while True:
    ret, frame = cap.read()

    #흑백 로드
    gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    cv.imshow('color', frame) #프레임 출력
    cv.imshow('gray', gray) #흑백영상으로 변환

    #밝기 처리
    bright = np.mean(frame)
    before_bright = 0
    if abs(bright-before_bright) > 30:
        break;
    before_bright = bright

    # 밝기가 30넘으면 그 시점부터 다음 3초간 반전시키기
    first_time = int(time.time()) #시작시간
    while True:
        ret, frame = cap.read()
        if not ret:
            break
        cv.imshow('before_inversed', frame)  # 반전되기 전 캡쳐(딱 밝아지는 부분)

        inversed = ~frame # 반전시키기
        output_video.write(inversed) #반전 영상 저장!
        cv.imshow('after_inversed', ~frame) # 반전된 후 캡쳐

        now_time = int(time.time()) #지금
        if now_time - first_time > 3:
            break

    if cv.waitKey(0):
        break
    elif cv.waitKey(delay) == 27:
        break

cv.destroyAllWindows()