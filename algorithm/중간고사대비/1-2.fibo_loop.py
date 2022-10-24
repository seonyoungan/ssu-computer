def fibo(n):
    a, b = 0, 1 #첫번째항, 두번째항
    for _ in range(n): #n만큼 반복
        a, b = b, a+b #두개항을 더해 새로운 값을 취함
    return a

n = int(input("n="))
print(fibo(n))