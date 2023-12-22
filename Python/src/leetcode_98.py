from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.isBSTUtil(root, float('-inf'), float('inf'))

    def isBSTUtil(self, node, min_val, max_val):
        if node is None:
            return True

        if node.val <= min_val or node.val >= max_val:
            return False

        return (self.isBSTUtil(node.left, min_val, node.val) and
                self.isBSTUtil(node.right, node.val, max_val))
