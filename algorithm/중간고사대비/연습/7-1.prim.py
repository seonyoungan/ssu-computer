import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())

#배열
visited = [False] * (V+1) #방문 여부 확인
Elist = [[] for _ in range(V+1)] #간선 저장
heap = [[0, 1]] #현재 그래프에서 짦은 경로 선택

for _ in range(E): #정점과 가중치 정보 저장
    s, e, w = map(int, input().split())
    Elist[s].append([w, e])
    Elist[e].append([w, s])

answer = 0
cnt = 0

#prim 알고리즘 사용 : 현재 그래프에서 가장 짧은 간선을 골라 방문하지 않은 정점이면 선택

while heap:
    if cnt == V: #정점 갯수만큼 반복
        break
    w, s = heapq.heappop(heap)
    if not visited[s]: #방문하지 않았으면 방문
        visited[s] = True
        answer +=w #누적
        cnt +=1 
        for i in Elist[s]:
            heapq.heappush(heap, i)
print(answer)
