import sys

def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = int(len(arr) // 2) #쪼갬
    left = merge_sort(arr[:mid]) #0~mid전까지 원소를 담음
    right = merge_sort(arr[mid:]) #mid~끝까지의 원소를 담음
    return merge(left, right)

def merge(left, right):
    merged_arr = [] #왼, 오 합친 배열
    
    i = j = 0

    while i < len(left) and j < len(right): #i가 left길이보다 작고 j가 right의 길이보다 작으면 반복됨
        if left[i] < right[j]: # left[i]가 right[j] 보다 작으면
            merged_arr.append(left[i]) # left[i]를 merged_arr에 추가
            i += 1 # i를 1만큼 증가
        else: #left[i]가 right[j]보다 크면
            merged_arr.append(right[j]) #right에 push하고
            j += 1 # j+1 증가
    
    #left, right별로 남아있으면 병합시켜줌
    while i <len(left):
        merged_arr.append(left[i])
        i += 1
    while j < len(right):
        merged_arr.append(right[j])
        j +=1
    return merged_arr


count = int(input("횟수 입력: "))
arr=[]

print(" ")
for _ in range(count): #count수만큼 반복 
    input_value = int(input("원소 입력: "))
    arr.append(input_value)
arr = merge_sort(arr)

print("\n--결과\n--")
result=[] #중복제거해서 최종으로 담을 배열 선언

for value in arr:
    if value not in result:
        result.append(value)
        print(value)