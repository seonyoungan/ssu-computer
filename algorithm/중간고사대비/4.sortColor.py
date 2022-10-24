def sortColors(nums):
    def quickSort(start, end):
        if (start>= end): #종료조건
            return
        
        pivot, p = nums[end], start #nums[end]의 인덱싱을 피봇으로 삼는다.
        for i in range(start, end):
            if (nums[i] < pivot): #pivot보다 작으면
                nums[i], nums[p] = nums[p], nums[i] #swap
                p+=1 #카운팅
        nums[p], nums[end] = nums[end], nums[p] #swap
        quickSort(start, p-1) #pivot을 전달하면서 왼쪽 sort
        quickSort(p+1, end) #pivot을 전달하면서 오른쪽 sort
    quickSort(0, len(nums)-1)
    return nums
    
nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')
#출력예시
#input : 2 0 1
#output: 0 1 2
