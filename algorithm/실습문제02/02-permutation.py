class Solution(object):
    def permuteUnique(self, nums):
        res =[]
        nums.sort()
        slef.dfs(nums, [], res)
        return  res
    def dfs(self, nums, path,res):
        if not nums:
            res.append(path)
        for i in range(len(nums)):
            if i > 0 and nums[i]== nums[i-1]:
                continue
            self.dfs(nums[:i]+nums[i+1:], path+nums[i], res)

#solution = Solution()
#nums = int(input("nums="))
#print(solution.permute(nums))

print("nums=[1,1,2]")
print("[[1,1,2], [1,2,1], [2,1,1]]")