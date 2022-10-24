def hanoi(n, start, end):
    if n == 1: #n == 1이면 
        print(start, end) #목적지로 옮긴다.
        return

    #첫 번쨰  맨 아래의 원판을 목적지로 옮기기위해 그 위의 원판(n-1)을 경유지로 옮긴다.
    hanoi(n-1, start, 6-start-end)
    #두 번째  맨 아래의 원판을 목적지로 옮긴다.
    print(start, end)
    #세 번째 n-1을 목적지로 옮긴다.
    hanoi(n-1, 6-start-end, end)


n = int(input()) #사용자의 입력
print(2**n-1) #입력된 n의 일반항
hanoi(n, 1, 3) #함수 호출