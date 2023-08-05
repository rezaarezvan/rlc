from src import leetcode_003


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_003.Solution().lengthOfLongestSubstring("abcabcbb") == 3

    def test_solution_2(self):
        assert leetcode_003.Solution().lengthOfLongestSubstring("bbbbb") == 1

    def test_solution_3(self):
        assert leetcode_003.Solution().lengthOfLongestSubstring("pwwkew") == 3
