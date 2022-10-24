# loop를 이용한 피보나치 알고리즘
def fibo(n):
    a, b = 0, 1 #a와 b는 각각 첫번쨰항 두번쨰항에 위치
    for _ in range(n): #n만큼 반복
        a,b = b, a+b #첫번째 항에는b의 값 두번째항에는 a+b값이 대입되도록 함
    return a 
n = int(input("n=")) #사용자 입력
print(fibo(n)) #피보나치 함수 호출