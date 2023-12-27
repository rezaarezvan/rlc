from src import leetcode_1578


class TestClass001(object):
    def test_solution_1(self):
        colors = "abaac"
        neededTime = [1, 2, 3, 4, 5]
        assert leetcode_1578.Solution().minCost(colors, neededTime) == 3

    def test_solution_2(self):
        colors = "abc"
        neededTime = [1, 2, 3]
        assert leetcode_1578.Solution().minCost(colors, neededTime) == 0

    def test_solution_3(self):
        colors = "aabaa"
        neededTime = [1, 2, 3, 4, 1]
        assert leetcode_1578.Solution().minCost(colors, neededTime) == 2
