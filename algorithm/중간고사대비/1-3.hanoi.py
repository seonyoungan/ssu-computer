
def hanoi_tower(n, start, end):
    if n == 1: #1이면
        print(start, end) #목적지에 바로 옮기기
        return
    
    #1단계  맨 아래의 n번째 원반을 목적지로 옮기기 위해 그 위의 원반(n-1)들을 경유지로 옮김
    hanoi_tower(n-1, start, 6-start-end)
    #2단계  맨 아래의 원반을 목적지로 옮김
    print(start, end)
    #3단계  경유지에 있던 원반(n-1)을 목적지로 옮김
    hanoi_tower(n-1, 6-start-end, end)

n = int(input()) #사용자 입력 받기
print(2**n-1) #이동 횟수의 일반항
hanoi_tower(n, 1, 3)