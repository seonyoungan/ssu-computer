import cv2 as cv

cap = cv.VideoCapture('cat.mp4')

if not cap.isOpened():
    print("Video open failed")
    exit()

w = round(cap.get(cv.CAP_PROP_FRAME_WIDTH))
h = round(cap.get(cv.CAP_PROP_FRAME_HEIGHT))
fps = cap.get(cv.CAP_PROP_FPS)

fourcc = cv.VideoWriter_fourcc(* 'DIVX')
delay = round(1000 / fps)

outputCat = cv.VideoWriter('outputCat.mp4', fourcc, fps, (w, h))  # 클래스 초기화

while True:
    ret, frame = cap.read() #각 frame을 읽어서

    if not ret: #에러가 있으면
        break; #멈추고
    inversed = ~frame #에러가 없으면 반전시키고

    cv.imshow('frame', frame)
    cv.imshow('inversed', inversed)

    if cv.waitKey(0):
        break;
    elif cv.waitKey(delay) == 27: #딜레이마다 화면에 출력시키기?
        break;

cv.destroyAllWindows()