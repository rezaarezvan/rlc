from src import leetcode_1637


class TestClass001(object):
    def test_solution_1(self):
        points = [[8, 7], [9, 9], [7, 4], [9, 7]]
        assert leetcode_1637.Solution().maxWidthOfVerticalArea(points) == 1

    def test_solution_2(self):
        points = [[3, 1], [9, 0], [1, 0], [1, 4], [5, 3], [8, 8]]
        assert leetcode_1637.Solution().maxWidthOfVerticalArea(points) == 3
