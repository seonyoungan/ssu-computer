import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())
visited = [False] * (V+1) #방문여부 확인
Elist = [[] in range(V+1)] #간선 저장
heap = [[0, 1]] #정점과 가중치 저장
for _ in range(E):
    s, e, w = map(int, input().split())
    Elist[s].append([w,e])
    Elist[e].append([w,s])

answer = 0
cnt = 0

#prim 알고리즘 사용
while heap:
    if cnt == V: #정점 갯수만큼 반복
        break;
    w, s = heapq.heappop(heap)
    if not visited[s]: #방문 안했따면
        visited[s] = True
        answer += w #가중치 누적
        cnt += 1
        for i in Elist[s]:
            heapq.heappush(heap, i)
print(answer)
