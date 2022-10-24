def hanoi_tower(n, start, end):
    if n == 1: #1이면
        print(start, end) #옮긴다.
        return
    
    #1단계  맨 아래의 원반을 꺼내기 위해 그 위의 원반들(n-1)을 경유지에 옮긴다.
    hanoi_tower(n-1, start, 6-start-end)
    #2단계  맨 아래의 원반을 목적지에 옮긴다
    print(start, end)
    #3단계  경유지에 있는 원반들을(n-1) 목적지로 옮긴다.
    hanoi_tower(n-1, 6-start-end, end)

#출력
n = int(input()) #사용자 입력
print(2**n-1) #이동 횟수의 일반항
hanoi_tower(n, 1, 3)

