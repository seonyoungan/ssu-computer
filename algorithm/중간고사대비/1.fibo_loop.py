def fibo(n):
    
    a, b = 0, 1 #a, b는 각각 첫번쨰항과 두번째항
    for _ in range(n): #n번만큼 반복
        a, b = b, a+b #누적해서
    return a

n = int(input("n=")) #사용자 입력
print(fibo(n)) #fibo합수 호출