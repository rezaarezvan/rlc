from typing import Optional

# Definition for singly-linked list.


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

    # This is needed for assert actual == expected
    def __eq__(self, other) -> bool:
        while self and other:
            if self.val != other.val:
                return False
            self = self.next
            other = other.next

        return self is None and other is None


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        p = dummy
        carry = 0

        while l1 or l2:
            x = 0
            y = 0

            if l1:
                x = l1.val
                l1 = l1.next

            if l2:
                y = l2.val
                l2 = l2.next

            s = x + y + carry
            carry = s // 10
            s = s % 10
            p.next = ListNode(s)
            p = p.next

        if carry:
            p.next = ListNode(carry)

        return dummy.next
