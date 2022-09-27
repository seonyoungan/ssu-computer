def sortColors(self, nums):
    def quickSort(start, end):
        if(start >= end): #종료
            return
        pivot, p = nums[end], start
        for i in range(start, end):
            if(nums[i]<pivot):
                nums[p].nums[i]=nums[i], nums[p]
                p+=1
        nums[p], nums[end] = nums[end], nums[p]
        quickSort(start, p-1)
        quickSort(p+1, end)

    quickSort(0, len(nums)-1)
    return nums
        