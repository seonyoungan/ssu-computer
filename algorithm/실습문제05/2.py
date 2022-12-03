class Solution:
    def wellFormed(self, s):
        n = len(s)
        dp = [0 for i in range(n)]

        if n<2:
            return 0
        dp[i] = 2 if s[:2]=="()" else 0

        for i in range(2, n):
            if s[i] == ")":
                if s[i-1]=="(":
                    if s[i-dp[i-1]-1] == "(":
                        dp[i] = dp[i-2] + 2 + dp[i-dp[i-2] -2 ]
                        