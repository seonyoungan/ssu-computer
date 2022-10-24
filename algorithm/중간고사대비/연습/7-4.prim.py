import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())
visited = [False]*(V+1) #방문 여부 확인
Elist = [[] for _ in range(V+1)] #간선 정보
heap = [[0, 1]]

for i in range(E): #간선 및 가중치 저장
    s, e, w = map(int, input().split())
    Elist[s].append([w, e])
    Elist[e].append([w, s])

answer = 0
cnt = 0

#프림알고리즘 구현: 최단 거리이면서 방문했으면 선택
while heap:
    if cnt == V: #간선수만큼 방문한 후 종료
        break 
    s, e = heapq.heappop(heap)
    if not visited[s]:
        visited[s] = True
        answer += w #가중치
        cnt+=1
        for i in Elist[s]:
            heapq.hepapush(heap, i)
print(answer)