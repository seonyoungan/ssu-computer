def sortColors(nums):
    def quickSort(start, end):
        if (start>= end):         #종료 조건
            return
        
        pivot, p = nums[end], start #pivot으로 삼음
        for i in range(start, end):
            if(nums[i] < pivot): #pivot보다 작으면
                nums[p], nums[i] = nums[i], nums[p]
                p+=1 #카운터 증가
        nums[p], nums[end] = nums[end], nums[p]
        quickSort(start, p-1) #왼쪽 소트
        quickSort(p+1, end) #오른쪽으로 소트
    quickSort(0, len(nums)-1)
    return nums
#출력
nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')

#입력 및 출력 형태 예시
#Input: 2 1 0
#Output: 0 1 2


