class Solution:
    def minOperations(self, s: str) -> int:
        occ = 0

        for i in range(len(s)):
            if i % 2 == 0:
                if s[i] == "1":
                    occ += 1
            else:
                if s[i] == "0":
                    occ += 1

        return min(occ, len(s) - occ)
