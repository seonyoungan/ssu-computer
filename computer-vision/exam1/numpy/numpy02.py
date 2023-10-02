import numpy as np

nums = np.array([[1, 4, 2],[7, 5, 3]])

print(nums[1, 1]) #5
print(nums[1, 0:2])  #[7 5]
print(nums[0:, 1:2]) #[[2] [3]]
print(nums[0:, :2]) #[[1 4]  [7 5]]
