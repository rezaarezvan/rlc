from src import leetcode_1758


class TestClass001(object):
    def test_solution_1(self):
        s = "0100"
        assert leetcode_1758.Solution().minOperations(s) == 1

    def test_solution_2(self):
        s = "10"
        assert leetcode_1758.Solution().minOperations(s) == 0

    def test_solution_3(self):
        s = "1111"
        assert leetcode_1758.Solution().minOperations(s) == 2
