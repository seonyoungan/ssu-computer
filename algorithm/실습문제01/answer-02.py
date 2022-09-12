

class Solution(object):
    def searchInsert(self, nums, target):
        left, right = 0, len(nums)-1 #left = 0, right = 배열의 길이 
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else :
                right = mid - 1
        return (right + 1)

nums = [1,3,5,6]
solution = Solution()
print("nums = ", nums, end=' ')
target = int(input("target= "))
print(solution.searchInsert(nums, target))