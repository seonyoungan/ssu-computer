class Solution(object):
    def climb(self, n):
        dp = [1,1] + [0]*n
        for i in range(2, n+1):

            dp[i] = dp[i-1] + dp[i-2]
        return dp[n]