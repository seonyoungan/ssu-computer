
n= int(input())
INF = int(1e9)
dp = [[INF]*(1<<n) for _ in range(n)]

def dfs(x, visited):
    if visited== (1<<n)-1: #모든 도시를 방문했다면
        if graph[x][0]: #출발점으로 가는 경로가 있을 때
            return graph[x][0]
        else:  #출발점으로 가는 경로가 없다면
            return INF  #모르니까 INF
        
    if dp[x][visited] != INF: #이미 최소비용이 계산되어있다면
        return dp[x][visited]
    
    for i in range(1, n): #모든 도시 탐방
        if not graph[x][i] #가는 경로가 없으면
            continue #스킵
        if visited & (1<<i) #이미 방문했다면
            continue #스킵

        #점화식
        dp[x][visited] = min(dp[x][visited], dfs(i, visited | (1<<i)) + graph[x][i])
        return dp[x][visited]
gprah = []
for i in range(n):
    graph.append(list(map(int, input().split())))

print(dfs(0, 1))