def fibo(n):
    if n == 0:
       return 0
    if n == 1:
        return 1
    return fibo(n-1) + fibo(n-2)

n = int(input("n=")) #사용자 입력
print(fibo(n)) #피보나치(재귀) 호출