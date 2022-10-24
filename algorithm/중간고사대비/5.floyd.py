#1. INF를 무한대로 초기화(본 프로그램에서 무한대는 10으로 가정함)
#2. 노드, 간선정보 입력 받음
#3. 최소비용 테이블 생성 후 INF로 초기화
#4. 대각선에 위치한 행렬들은 0이므로(플로이드 알고리즘 특성) 대각행렬을 0으로 초기화함
#5. 간선의 정보를 연결
#6. 플로이드워셜 알고리즘 사용(점화식 ㅎ사용하여)
#7. 출력

INF = int(1e9)

num_node = int(input("노드 갯수: "))
num_edge = int(input("간선 갯수: "))

min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)]

for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if a == b:
            min_dist[a][b] = 0

for _ in range(num_edge):
    a, b, cost = map(int, input("간선 정보: ").split())
    min_dist[a][b] = cost

#알고리즘 구현
for k in range(1, num_node+1):
    for a in range(1, num_node+1):
        for b in range(1, num_node+1):
            min_dist[a][b] = min(min_dist[a][b], min_dist[a][k]+min_dist[k][b])

#출력
for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF", end=' ')
        else:
            print(min_dist[a][b], end=' ')
    print()