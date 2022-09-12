class Solution(object):
    def sqrt(self, x):
        min, max = 0, x
        while min <= max:
            mid = min + (max-min) // 2
            if (mid * mid) <= x and x < (mid+1) * (mid+1):
                return mid
            elif x < mid * mid:
                max = mid -1
            else:
                min = mid + 1

x = int(input("x = "))
solution = Solution()
print(solution.sqrt(x))