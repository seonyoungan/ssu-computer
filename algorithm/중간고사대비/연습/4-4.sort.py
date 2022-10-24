def sortColors(nums):
    def quickSort(start, end):
        if (start>= end):#종료조건
            return

        pivot, p = nums[end], start
        for i in range(start, end):
            if (nums[i] < pivot): #pivot보다 nums[i]가 작으면
                nums[i], nums[p] = nums[p], nums[i] #swap
                p+=1 #count
        nums[p], nums[end] = nums[end], nums[p] #swap
        quickSort(start, p-1) #새로운 피봇을 전달하며 왼쪽으로 재귀적 sort
        quickSort(p+1, end) #새 피봇 전달하며 오른쪽으로 재귀적 sort
    
    quickSort(0, len(nums)-1) #start값: 0, end값: nums배열의 길이
    return nums


#출력
nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')

#출력 예시입니다.
#input : 2 0 1
#output: 0 1 2