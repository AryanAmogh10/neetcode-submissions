# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        checker = 0
        if not root:
            return True
        else:
            def dfs(root):
                nonlocal checker
                if not root:
                    return 0
                else:
                    l = dfs(root.left)
                    r = dfs(root.right)
                    checker = max(checker, l - r)
                    checker = max(checker, r - l)
                    return 1 + max(l, r)
            dfs(root)
            if checker > 1:
                return False
            else: return True
                
                    