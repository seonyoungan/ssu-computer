def fibo(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    #0과 1이 아닌 경우
    return fibo(n-1) + fibo(n-2) #재귀함수를 이용한 피보나치 수식

n = int(input("n="))
print(fibo(n))
