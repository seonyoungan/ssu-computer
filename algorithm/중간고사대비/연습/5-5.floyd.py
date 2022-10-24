#floyed 알고리즘
#1. INF를 무한대로 설정(본 프로그램에서는 무한대를 10억이라고 함)
#2. 노드, 간선의 개수 입력 받음
#3. 최단 거리 비용 테이블을 생성하고 무한대로 초기화함
#4. 대각선의 행렬은 0이므로, (a,b)좌표에서 a==b이면 0으로 초기화함
#5. 간선 정보 입력
#6. 점화식을 이용한 플로이드 알고리즘 구현
#7. 출력

INF = int(1e9) #1

num_node = int(input("노드 개수: ")) #2
num_edge = int(input("간선 개수: ")) #2
min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)] #3

for a in range(1, num_node+1): #4
    for b in range(1, num_node+1):
        if a == b:
            min_dist[a][b] = 0

for _ in range(num_edge): #5
    a, b, cost = map(int, input("[간선 정보] 노드, 간선, 비용을 순서대로 입력: ").split())
    min_dist[a][b] = cost

for k in range(1, num_node+1): #6
    for a in range(1, num_node+1):
        for b in range(1, num_node+1):
            min_dist[a][b] = min(min_dist[a][b], min_dist[a][k]+min_dist[k][b]) #더 짧은 비용 구하기

for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF", end=" ")
        else:
            print(min_dist[a][b], end=" ")
    print(" ") #개행
