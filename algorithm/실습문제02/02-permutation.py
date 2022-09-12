
def DFS(L):
    if L == len(n): # 종료조건: L값이 배열의 길이와 동일하면 종료
        print(result, end=' ')
    else:
        for i in range(len(n)):
            if i> 0 and n[i] == n[i-1]:
                continue
            if checklist[i] == 0: #사용했으면1, 사용안했으면2
                result[L] = n[i]
                checklist[i] = 1 #체크
                DFS(L+1) #이동
                checklist[i] = 0 #back하면서 체크리스트 0

if __name__ == "__main__":
    n = [1,1,2]

    result = [0] * len(n)
    checklist = [0] * len(n) #n사용됐는지 확인용
    DFS(0)