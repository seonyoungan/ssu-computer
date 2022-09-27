def quick(array):
    #리스트가 하나 이하의 원소만 담고 있으면 종료
    if len(array) <= 1:
        return array

    pivot = array[0] #피벗: 첫번째 원소
    tail = array[1:] #피벗을 제외한 리스트

    left = [x for x in tail if x <= pivot] #분할된 왼쪽 부분
    right = [x for x in tail if x >= pivot] # 분할된 오른쪽부분

    #분할 이후 왼족 부분광 ㅗ른쪽 부분에서 각각 정렬 수행, 전체 리스트 반환
    return quick(left) + [pivot] + quick(right)

numbers = list(map(int, input().split()))
sorted = quick(numbers)
for i in sorted:
    print(i, end=' ')