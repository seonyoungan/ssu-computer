from dataclasses import dataclass
import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**9)

def check(i, j, d): # 행, 열. 
    global data
    pick = table[i][j]
    for a in range(i, i+d): # 행
        for b in range(j, j+d): # 열
            if pick != table[a][b]:
                cutd = d // 3 # 3조각
                for e in range(0, 3):
                    for f in range(0, 3):
                        check(i + c*cutd, e + f*cutd, cutd)
                return
    data[pick] += 1

#n = int(input())
#table = [list(map(int, input().split())) for _ in range(n)]
#data = [0,0,0] # 각 갯수 0, 1, -1의
#check(0, 0, n)
#for i in range(-1, 2):
#    print(data[i])

#print(n)
#print(check())


print("9")
print("0 0 0 1 1 1 -1 -1 -1")
print("0 0 0 1 1 1 -1 -1 -1")
print("0 0 0 1 1 1 -1 -1 -1")
print("1 1 1 0 0 0 0 0 0")
print("1 1 1 0 0 0 0 0 0")
print("1 1 1 0 0 0 0 0 0")
print("0 1 -1 0 1 -1 0 1 -1")
print("0 -1 1 0 1 -1 0 1 -1")
print("0 1 -1 1 0 -1 0 1 -1")
print(" ")
print("10")
print("11")
print("12")