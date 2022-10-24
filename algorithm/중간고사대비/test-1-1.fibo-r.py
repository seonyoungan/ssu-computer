#재귀함수를 이용한 피보나치 알고리즘
def fibo(n):
    if n == 0: #n이 0이면 0리턴
        return 0
    if n == 1: #n이 1이면 1리턴
        return 1
    return fibo(n-1) + fibo(n-2) #1과 2가 아니면 재귀를 통한 피보나치 호출 

n = int(input("n=")) #사용자 입력
print(fibo(n)) #함수 호출