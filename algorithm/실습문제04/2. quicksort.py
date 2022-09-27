def quick(self, nums, k):
    #k번째 큰 수를 구하기 위해 뒤에서 k번째까지만 고려함
    for i in range(len(nums), len(nums)-k, -1):
        tmp = 0
        for j in range(i):
            if nums[j] > nums[tmp]:
                tmp = j 
        nums[tmp], nums[i-1] = nums[i-1], nums[tmp] #swap
        #인덱스 tmp가 pivot역할을 함
        #오른쪽은 피봇보다 큰값, 왼쪽은 피봇보다 작은값
    return nums(len(nums)-k) #k번째 큰 값 반환
