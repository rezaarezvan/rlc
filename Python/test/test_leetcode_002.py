from src import leetcode_002


def array_to_ListNode(array):
    dummy = leetcode_002.ListNode()
    p = dummy

    for i in array:
        p.next = leetcode_002.ListNode(i)
        p = p.next

    return dummy.next


class TestClass002(object):
    def test_solution_1(self):
        l1 = array_to_ListNode([2, 4, 3])
        l2 = array_to_ListNode([5, 6, 4])
        expected = array_to_ListNode([7, 0, 8])
        actual = leetcode_002.Solution().addTwoNumbers(l1, l2)
        assert actual == expected

    def test_solution_2(self):
        l1 = array_to_ListNode([0])
        l2 = array_to_ListNode([0])
        expected = array_to_ListNode([0])
        actual = leetcode_002.Solution().addTwoNumbers(l1, l2)
        assert actual == expected

    def test_solution_3(self):
        l1 = array_to_ListNode([9, 9, 9, 9, 9, 9, 9])
        l2 = array_to_ListNode([9, 9, 9, 9])
        expected = array_to_ListNode([8, 9, 9, 9, 0, 0, 0, 1])
        actual = leetcode_002.Solution().addTwoNumbers(l1, l2)
        assert actual == expected
