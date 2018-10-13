/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *endnode(struct ListNode *l1, struct ListNode *ret) {
	struct ListNode *new = malloc(sizeof(struct ListNode));
	new->next = NULL;
	new->val = 1;
	l1->next = new;

	return ret;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
	int carry = 0;
	struct ListNode* ret = l1;

	while (l1 && l2) {
		l1->val += l2->val + carry;
		carry = l1->val / 10;
		l1->val = l1->val % 10;
		if (!l1->next) {
			l1->next = l2->next;
			if (!l1->next && carry)
				return endnode(l1, ret);
			l1 = l1->next;
			l2 = NULL;
		} else {
			l1 = l1->next;
			l2 = l2->next;
		}
	}

	while (l1) {
		l1->val += carry;
		carry = l1->val / 10;
		l1->val = l1->val % 10;
		if (!l1->next && carry) 
			return endnode(l1, ret);
		l1 = l1->next;
	}
	return ret;
}
