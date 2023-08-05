class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        if len(s) == 1:
            return 1
        max_len = 0
        for i in range(len(s)):
            for j in range(i+1, len(s)+1):
                if len(set(s[i:j])) == len(s[i:j]):
                    max_len = max(max_len, len(s[i:j]))
        return max_len
