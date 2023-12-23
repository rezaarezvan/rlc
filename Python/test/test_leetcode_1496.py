from src import leetcode_1496


class TestClass001(object):
    def test_solution_1(self):
        path = "NES"
        assert leetcode_1496.Solution().isPathCrossing(path) is False

    def test_solution_2(self):
        path = "NESWW"
        assert leetcode_1496.Solution().isPathCrossing(path) is True
