def sortColors(nums):
    def quickSort(start, end):
        if (start>=end): #종료조건
            return
        pivot, p = nums[end], start #end인덱스에 해당하는 원소를pivot으로 삼는다.
        for i in range(start, end):
            if(nums[i]< pivot):
                nums[p], nums[i] = nums[i], nums[p] # swap
                p+=1 #카운터 증가
        nums[p], nums[end] = nums[end], nums[p] #swqp
        quickSort(start, p-1) #왼쪽으로 재귀
        quickSort(p+1, end) #오른쪽 재귀

    quickSort(0, len(nums)-1)
    return nums

#출력
nums = list(map(int, input().split()))
for i in sortColors(nums):
    print(i, end=' ')
