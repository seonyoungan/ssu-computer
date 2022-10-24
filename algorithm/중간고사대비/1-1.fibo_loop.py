def fibo(n):
    a, b = 0, 1 #첫째항 0, 둘째항 1
    for _ in range(n): # n번 반복
        a, b = b, a+b # 이전의 두개의 항을 더해서 새로운 항의 값으로 취함
    return a #return

n=int(input("n="))
print(fibo(n))
