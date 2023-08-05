from src import leetcode_004


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_004.Solution().findMedianSortedArrays([
            1, 3], [2]) == 2.0

    def test_solution_2(self):
        assert leetcode_004.Solution().findMedianSortedArrays([
            1, 2], [3, 4]) == 2.5
