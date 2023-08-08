from src import leetcode_005


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_005.Solution().longestPalindrome("babad") == "aba"

    def test_solution_2(self):
        assert leetcode_005.Solution().longestPalindrome("cbbd") == "bb"
