
INF = int(1e9)
num_node = int(input(print("노드 개수를 입력: ")))
num_edge = int(input(print("간선 개수를 입력: ")))

min_dist = [[INF]*(num_node+1) for _ in range(num_node+1)]

for a in range(1, num_node + 1):
    for b in range(1, num_node+1):
        if a==b:
            min_dist[a][b] = 0

for _ in range(num_edge):
    a, b, cost = map(int, input("[간선 정보 입력] 출발 노드, 도착노드, 비용순서 입력: ").split())
    min_dist[a][b] = cost

for k in range(1, num_node + 1):
    for a in range(1, num_node + 1):
        min_dist[a][b] = min(min_dist[a][b], min_dist[a][k] + min_dist[k][b])

for a in range(1, num_node+1):
    for b in range(1, num_node+1):
        if min_dist[a][b] == INF:
            print("INF")
        else:
            print(min_dist[a][b], end=' ')
    print()

            



