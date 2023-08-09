from src import leetcode_006


class TestClass001(object):
    def test_solution_1(self):
        assert leetcode_006.Solution().convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR"

    def test_solution_2(self):
        assert leetcode_006.Solution().convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI"

    def test_solution_3(self):
        assert leetcode_006.Solution().convert("A", 1) == "A"
