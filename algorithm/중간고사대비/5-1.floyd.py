# 1. 무한을 의미하는 10억으로 INF초기화
# 2. 노드, 간선 정보 입력
# 3. 최단거리를 나타내는 테이블 생성, 테이블을 무한으로 초기화
# 4. 대각행렬은 0으로 초기화(원래 대각 행렬이 0이므로)
# 5. 간선 정보 입력
# 6. 플로이드 워셜 알고리즘 구현(점화식 사용) 
# 7. 결과 개행

INF = int(1e9) #1
num_node = int(input("노드 개수: ")) #2
num_edge = int(input("엣지 개수: ")) #2
min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)] #3

for a in range(1, num_node+1): #4
    for b in range(1, num_node+1):
        if a == b:
            min_dist[a][b] = 0

for _ in range(num_edge): #5
    a, b, cost = map(int, input("[간선정보] a, b, cost 순서대로 입력: ").split())
    min_dist[a][b] = cost

for k in range(1, num_node+1): #6
    for a in range(1, num_node+1):
        for b in range(1, num_node+1):
            min_dist[a][b] = min(min_dist[a][b], min_dist[a][k]+min_dist[k][b])

for a in range(1, num_node+1): #출력
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF")
        else:
            print(min_dist[a][b], end=" ")
    print()
