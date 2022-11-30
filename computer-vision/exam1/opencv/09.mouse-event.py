import cv2 as cv

def on_mouse(event, x, y, flags, param):
    global oldx, oldy

    if event == cv.EVENT_LBUTTONDOWN: #마우스 왼쪽 버튼을 누르면
        oldx, oldy = x, y #첫 마우스의 좌표를.. 담아놉니다?...
        print('EVENT_LBUTTONDOWN: %d %d' %(x, y))  #누른상태로 움직인 좌표가 이제 출력된ㅇ다.

    elif event == cv.EVENT_LBUTTONUP: # 마우스 왼쪽 버튼에서 손을 떼면
        print('EVENT_LBUTTONUP: %d %d' %(x, y)) # 그.. 좌표를 출력한다

    elif event == cv.EVENT_MOUSEMOVE: # 마우스를 움직이면
        if flags & cv.EVENT_FLAG_LBUTTON: # 그린다.
            cv.line(img, (oldx, oldy), (x,y), (0, 255, 255), 2)
            cv.imshow('img', img)
            oldx, oldy = x, y #위치기억

img = cv.imread('cat.jpeg')
if img is None:
    print('image load failed')
    exit()

cv.namedWindow('img')
cv.setMouseCallback('img', on_mouse)

cv.imshow('img', img)
cv.waitKey()
cv.destroyAllWindows()