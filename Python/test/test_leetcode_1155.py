from src import leetcode_1155


class TestClass001(object):
    def test_solution_1(self):
        n = 1
        k = 6
        target = 3
        assert leetcode_1155.Solution().numRollsToTarget(n, k, target) == 1

    def test_solution_2(self):
        n = 2
        k = 6
        target = 7
        assert leetcode_1155.Solution().numRollsToTarget(n, k, target) == 6

    def test_solution_3(self):
        n = 30
        k = 30
        target = 500
        assert leetcode_1155.Solution().numRollsToTarget(n, k, target) == 222616187
