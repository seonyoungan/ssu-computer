a = 1000 - int(input()) #1000미만 정수
b=[500, 100, 50, 10,5,1]
count=0
for i in b:
    count+=a #잔돈누적
    a%=i #나머지
print(count) #잔돈

