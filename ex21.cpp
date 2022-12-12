class Solution {
public:
    void MoveListNode(ListNode** destRef, ListNode** sourceRef)
    {
        ListNode* newListNode = *sourceRef;
        assert(newListNode != NULL);
        *sourceRef = newListNode->next;
        newListNode->next = *destRef;
        *destRef = newListNode;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy;
	ListNode* tail = &dummy;
	dummy.next = NULL;
	while (1) {
		if (list1 == NULL) {
			tail->next = list2;
			break;
		}
		else if (list2 == NULL) {
			tail->next = list1;
			break;
		}
		if (list1->val <= list2->val)
			MoveListNode(&(tail->next), &list1);
		else
			MoveListNode(&(tail->next), &list2);

		tail = tail->next;
	}
	return (dummy.next);
    }
};
