def sortColors(nums):
    def quickSort(start, end):
        if (start >= end): #종료조건
            return
        pivot, p = nums[end], start  #end인덱스에 해당 원소를 피봇으로 삼는다.
        for i in range(start, end):
            if (nums[i] < pivot): # pivot보다 작으면
                nums[i], nums[p] = nums[p], nums[i] #swap
                p+=1 #count함
        nums[p], nums[end] = nums[end], nums[p] #swap
        quickSort(start, p-1) # 새 피봇을 전달하면서 왼쪽 재귀적으로 소트
        quickSort(p+1, end) #새 피봇 전달하면서 오른쪽 재귀적으로 소트

    quickSort(0, len(nums)-1)
    return nums

#출력
nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')
