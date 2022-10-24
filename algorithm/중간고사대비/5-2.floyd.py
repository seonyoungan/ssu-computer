#알고리즘
#1. INF를 무한을 의미하는 10억으로 초기화
#2. 노드 개수와 간선 개수를 입력 받음
#3. 최단 거리 테이블을 생성하고 무한으로 초기화함
#4. 대각행렬은 모두 0이므로 0으로 초기화
#5. 간선 정보 연결
#6. 점화식을 활용해 플로이드 알고리즘 구현
#7. 결과

INF = int(1e9) #1

num_node = int(input("노드 개수: ")) #2
num_edge = int(input("간선 개수: ")) #2 

min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)] #3

for a in range(1, num_node+1): #4
    for b in range(1, num_node+1):
        if a == b:
            min_dist[a][b] = 0

for _ in range(num_edge): #5
    a, b, cost = map(int, input("간선 정보: 노드, 간선, cost 순서대로 입력: ").split())
    min_dist[a][b] = cost

for k in range(1, num_node+1): #6
    for a in range(1, num_node+1):
        for b in range(1, num_node+1):
            min_dist[a][b] = min(min_dist[a][b], min_dist[a][k]+min_dist[k][b])

for a in range(1, num_node+1): #7
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF", end=" ")
        else:
            print(min_dist[a][b], end=" ")
    print() #개행
