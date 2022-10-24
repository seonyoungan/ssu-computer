def hanoi(n, start, end):
    if n == 1: #1이면
        print(start, end) #목적지로 옮긴다.
        return 
    #첫번쨰: 맨 마지막 원판을 목적지로 옮기기 위해 그 위의 n-1개의 원판을 경유지로 옮김
    hanoi(n-1, start, 6-start-end)
    #두번쨰: 마지막 원판을 목적지로 옮긴다.
    print(start, end)
    #세번째: n-1개의 원판들을 목적지로 옮긴다.
    hanoi(n-1, 6-start-end, end)

    
n = int(input()) #사용자 입력
print(2**n-1) #이동횟수 항
hanoi(n, 1, 3)#함수호출