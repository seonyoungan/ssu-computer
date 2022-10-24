def sortColors(nums):
    def quickSort(start, end):
        if(start>=end): #종료조건
            return
        pivot, p = nums[end], start #end 인덱스에 해당하는 원소를 pivot으로 삼음
        for i in range(start, end): 
            if(nums[i]<pivot): # pivot보다 작으면
                nums[p], nums[i] =nums[i], nums[p] #swqp
                p+=1 #피봇보다 작은 값 개수 count
        nums[p], nums[end] = nums[end], nums[p] #swap
        quickSort(start, p-1) #새 피봇 전달하면서 원래 피봇의 왼쪽 재귀적 소트
        quickSort(p+1, end) #새 피봇 전달하면서 원래 피봇의 오른쪽 재귀적 소트

    quickSort(0, len(nums)-1)
    return nums


nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')
