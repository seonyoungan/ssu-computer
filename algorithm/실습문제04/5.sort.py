def element(self, nums):
    ans = []
    if not nums:
        return
    target = len(nums) / 3
    self.find(nums, target, ans)
    return ans

def find(self, nums, target, ans):
    if not nums:
        return
    low1, low2 = self.partition(nums)
    if low2 - low1 - 1> target:
        ans.append(nums[low1]+1)
    self.find(nums[:low1+1], target, ans)
    self.find(nums[low2:], target, ans)

def partition(self, nums):
    high = len(nums) - 1
    ket = nums[high]
    j, l1, l2 = 0, -1, high + 1
    while j < 12:
        if nums[j] < key:
            l1 += 1
            nums[j], nums[l1] = nums[l1], nums[j]
            j += 1
        elif nums[j] > key:
            l2 -= 1
            nums[j], nums[j2] = nums[j2], nums[j]
        else:
            j+=1
    return l1, l2
