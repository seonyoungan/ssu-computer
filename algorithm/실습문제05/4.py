class Solution(object):
    def subArray(self, nums):
        m = nums
        for i in range(1, len(nums)):
            m[i] = max(m[i],m[i-1]+nums[i])

print("nums = [1]")
print("1")