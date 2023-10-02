import numpy as np

arr = ['3.14', 2., 5, 3]
n_arr = np.array(arr)
print(arr)
print(type(arr))
print(n_arr)
print(type(n_arr))
print("\n")

arr2 = [4.6, 2., 5, 3]
n_arr2 = np.array(arr2, dtype='uint8')
print(arr2)
print(type(arr2))
print(n_arr2)
print(type(n_arr2))
print("\n")

#속성
nums = np.array([1, 4, 3, 5, 3])
print(nums)
print(nums.ndim) #차원의 수
print(nums.shape) #배열의 모양 확인(=첫번째 차원에 항목이 5개 들어가 있음)
print(len(nums.shape)) #튜플의 길이 체크 = ndim
print(nums.size) #배열의 크기
print("\n")

