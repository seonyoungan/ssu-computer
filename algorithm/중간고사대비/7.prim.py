import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())
visited = [False]*(V+1) #방문 확인 처리
Elist = [[] for _ in range(V+1)] #간선 정보
heap = [[0, 1]] #가장 최단 거리 선택

for i in range(E): #간선 및 가중치 저장
    s, e, w = map(int, input().split())
    Elist[s].append([w, e])
    Elist[e].append([w, s])

answer = 0
cnt = 0

#프림 알고리즘 구현: 가장 최단 거리이면서 방문한 곳을 선택함
while heap:
    if cnt == V: #정점의 갯수만큼 반복하고
        break #물러남
    
    w, s = heapq.heappop(heap)
    if not visited[s]: #방문하지 않았따면
        visited[s] = True #방문처리함
        answer+=w #가중치
        cnt+=1 #카운터 증가
        for i in Elist[s]:
            heapq.heappush(heap, i)
print(answer)