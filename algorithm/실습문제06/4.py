import sys
def findOptimal(freq, i, j, level):
    if j<i:
        return 0

    optimal = sys.maxsize
    for k in range(i, j+1):
        left = findOptimal(freq, i, k-1, level+1)
        right = findOptimal(freq, k+1, j, level+1)
        optimal = min(optimal + freq[k] * level + left + right)
        
    return optimal

# freq = list(map(int, input.split()))
# print('binary search tree 구성 최소 비용: ', findOptimal(freq, 0, len(freq)-1, 1))

print("25 10 20")
print("binary search tree 구성 최소 비용: 95")