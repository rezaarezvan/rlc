class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        MOD = 10**9 + 7
        dp = [0] * (target + 1)
        for i in range(1, min(k, target) + 1):
            dp[i] = 1

        for _ in range(2, n + 1):
            new_dp = [0] * (target + 1)
            for i in range(1, target + 1):
                for j in range(1, k + 1):
                    if i - j > 0:
                        new_dp[i] += dp[i - j]
                        new_dp[i] %= MOD
            dp = new_dp

        return dp[target]
