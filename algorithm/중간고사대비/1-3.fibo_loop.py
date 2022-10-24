def fibo(n):
    a, b = 0, 1 #3. 각각 첫번째 항, 두번쨰항
    for _ in range(n): #4. n만큼 반복
        a, b = b, a+b #5. 이전에 계산된 값을 새 항으로 더함
    return a
n = int(input("n = ")) #1. 사용자 입력
print(fibo(n)) #2. 피보나치 반복수행 함수 호출