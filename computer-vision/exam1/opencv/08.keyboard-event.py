import cv2 as cv

img = cv.imread('cat.jpeg')
if img is None:
    print('Image load failed')
    exit()

cv.namedWindow('img')
cv.imshow('img', img)

while True:
    keycode = cv.waitKey() #입력할 키
    if keycode == ord('i') or keycode == ord('I'):
        img = ~img
        cv.imshow('img', img)
    elif keycode == 27 or keycode == ord('q') == keycode == ord('Q'):
        break;

cv.destoryAllWindows()
