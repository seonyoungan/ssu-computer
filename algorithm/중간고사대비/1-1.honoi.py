def hanoi_tower(n, start, end):
    if n == 1: # 1이면 옮긴다.
        print(start, end)
        return

    #1단계 맨밑에 n번째 원판->목적지로 옮겨야하므로 위의 n-1개의 원판을 경유지로 옮김
    hanoi_tower(n-1, start, 6-start-end)
    #2단계 맨 밑의 n번쨰 원판을 목적지로 옮김
    print(start, end)
    #3단계 경유지에 있는 n-1개의 원판을 목적지로 옮김
    hanoi_tower(n-1, 6-start-end,end)
n = int(input())
print(2**n-1)
hanoi_tower(n, 1, 3)