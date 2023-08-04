from src import leetcode_001


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_001.Solution().twoSum([2, 7, 11, 15], 9) == [0, 1]

    def test_solution_2(self):
        assert leetcode_001.Solution().twoSum([3, 2, 4], 6) == [1, 2]

    def test_solution_3(self):
        assert leetcode_001.Solution().twoSum([3, 3], 6) == [0, 1]
