from src import leetcode_98


class TestClass001(object):
    def test_solution_1(self):
        root = leetcode_98.TreeNode(2)
        root.left = leetcode_98.TreeNode(1)
        root.right = leetcode_98.TreeNode(3)
        assert leetcode_98.Solution().isValidBST(root) is True

    def test_solution_2(self):
        root = leetcode_98.TreeNode(5)
        root.left = leetcode_98.TreeNode(1)
        root.right = leetcode_98.TreeNode(4)
        root.right.left = leetcode_98.TreeNode(3)
        root.right.right = leetcode_98.TreeNode(6)
        assert leetcode_98.Solution().isValidBST(root) is False
