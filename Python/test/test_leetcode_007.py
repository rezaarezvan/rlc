from src import leetcode_007


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_007.Solution().reverse(123) == 321

    def test_solution_2(self):
        assert leetcode_007.Solution().reverse(-123) == -321

    def test_solution_3(self):
        assert leetcode_007.Solution().reverse(120) == 21
