class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    
class Solution(object):
    def sortedArrayToBST(self, nums):
        total_nums= len(nums)
        if not total_nums:
            return None

        mid_node = total_nums
        return TreeNode(
            nums[mid_nodes],
            self.sortedArrayToBST(nums[:mid_node]),
            self.sortedArrayToBST(nums[mid_node+1:])
        )

print("nums = [1, 3]")
print("3,1")