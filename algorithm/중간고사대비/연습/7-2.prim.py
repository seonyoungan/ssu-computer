import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())
visited = [False] * (V+1) #방문 여부저장
Elist = [[] for _ in range(V+1)] #간선 정보 저장
heap = [[0, 1]]

for _ in range(E): #정점과 가중치 정보 저장
    s, e, w = map(int, input().split())
    Elist[s].append([w, e])
    Elist[e].append([w, s])

answer = 0
cnt = 0

#prim 알고리즘 사용: 현재 그래프에서 가장 짧은 거리이고 방문하지 않았다면 선택
while heap:
    if cnt == V: #간선횟수만큼 다돌았으면
        break #빠져나감
    w, s = heapq.heappop(heap)
    if not visited[s]: #방문하지 않았다면
        visited[s] = True #방문처리
        answer+=w #가중치 누적
        cnt+=1 #카운터
        for i in Elist[s]:
            heapq.heappush(heap, i)
print(answer)