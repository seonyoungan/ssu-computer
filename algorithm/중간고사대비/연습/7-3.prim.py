import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split()) #입력 받기
visited = [False] * (V+1) #방문여부확인
Elist = [[] for _ in range(V+1)] #간선을 저장함
heap = [[0, 1]]

for i in range(E): #간선과 가중치 저장
    s, e, w = map(int, input().split())
    Elist[s].append([w, e])
    Elist[e].append([w, s])

answer = 0
cnt = 0

#prim알고리즘: 최단거리이고 이미 방문했으면 선택
while heap:
    if cnt == V : #정점 갯수만큼 반복
        break
    w, s = heapq.heappop(heap)
    if not visited[s]:
        visited[s] = True
        answer+= w
        cnt+=1
        for i in Elist[s]:
            heapq.heappush(heap, i)
print(answer)