


def binarySearch(nums, target, start, end):

    while start <= end:
        mid = (start + end) // 2
        if nums[mid] == target:
            print(mid)
            break
        elif nums[mid] < target:
            start = mid + 1
        elif nums[mid] > target:
            end = mid - 1


nums = [1, 3, 5, 6]
target = 8

length = len(nums) #길이
start = 0 #첫번째 요소
end = length - 1 #마지막 요소

print("nums =", nums, "target =", target)
binarySearch(nums, target, start, end)