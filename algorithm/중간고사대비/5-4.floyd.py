#플로이드 알고리즘 구현
#1. 무한대(본 프로그램에서 무한대 == 10억으로 처리)로 INF초기화
INF = int(1e9)
#2. 노드, 간선 개수 입력받음
num_node = int(input("노드 개수: "))
num_edge = int(input("간선 개수: "))

#3. 최단 거리 비용 테이블 생성 및 INF로 초기화
min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)]

#4. 좌표(a,b)일 때 a==b이면 0인 것이 특징이므로, 대각행렬은 0으로 초기화함
for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if a == b:
            min_dist[a][b] = 0

#5. 간선 정보 연결
for _ in range(num_edge):
    a, b, cost = map(int, input("[간선 정보 입력] 노드, 간선, 비용을 순서대로 입력: ").split())
    min_dist[a][b] = cost

#6. 점화식을 활용해 플로이드 알고리즘 구현
for k in range(1, num_node+1):
    for a in range(1, num_node+1):
        for b in range(1, num_node+1):
            min_dist[a][b] = min(min_dist[a][b], min_dist[a][k]+min_dist[k][b])

#7. 출력
for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF", end=" ")
        else:
            print(min_dist[a][b], end=" ")
    print() #개행
