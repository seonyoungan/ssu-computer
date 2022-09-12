class Solution(object):
    def pascal(self, numRows):
        poly = [[1]*(i+1) for i in range(numRows)]
        for i in range(numRows):
            for j in range(1, i):
                poly[i][j] = poly[i-1][j-1] + poly[i-1][j]
        return poly


solution = Solution()
text = int(input("numRows = "))
print(solution.pascal(text))