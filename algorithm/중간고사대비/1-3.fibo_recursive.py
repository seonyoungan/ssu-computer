def fibo(n):
    if n == 0: #n이 0이면 0 리턴
        return 0
    if n == 1: #n이 1이면 1 리턴
        return 1
    return fibo(n-1) + fibo(n-2) #0과 1이 아니면 재귀 호출

n= int(input("n=")) #사용자 입력
print(fibo(n))#재귀적 피봔치 호출