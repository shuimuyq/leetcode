# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry = 0
        first = None
        last = None
        while l1 or l2 or carry:
            sum = 0
            if l1:
                sum += l1.val
            if l2:
                sum += l2.val
            sum += carry
            carry = sum // 10
            sum %= 10
            
            node = ListNode(sum)
            node.next = None
            if last is None:
                last = first = node
            else:
                last.next = node
                last = last.next
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
        return first
