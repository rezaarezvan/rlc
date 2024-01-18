from src import leetcode_70


class TestClass001(object):
    def test_solution_1(self):
        n = 2
        assert leetcode_70.Solution().climbStairs(n) == 2

    def test_solution_2(self):
        n = 3
        assert leetcode_70.Solution().climbStairs(n) == 3

    def test_solution_3(self):
        n = 4
        assert leetcode_70.Solution().climbStairs(n) == 5
