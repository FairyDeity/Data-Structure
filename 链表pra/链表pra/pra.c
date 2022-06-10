//分割链表
//struct ListNode* partition(struct ListNode* head, int x)
//{
//	struct ListNode* lessHead = NULL;
//	struct ListNode* lessTail = NULL;
//	struct ListNode* greaterHead = NULL;
//	struct ListNode* greaterTail = NULL;
//	
//	lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//	greaterHead = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//	lessTail->next = NULL;
//	greaterTail->next = NULL;
//
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		if (cur->val < x)
//		{
//			lessTail->next = cur;
//			lessTail = lessTail->next;
//			cur = cur->next;
//		}
//		else
//		{
//			greaterTail->next = cur;
//			greaterTail = greaterTail->next;
//			cur = cur->next;
//		}
//	}
//
//	//链接两个链表
//	lessTail->next = greaterHead->next;
//	//置空，否则会造成成环的情况
//	greaterTail->next = NULL;
//
//	head = lessHead->next;
//	free(greaterHead);
//	free(lessHead);
//
//	return head;
//}


//回文链表
//给你一个单链表的头节点 head ，请你判断该链表是否为回文链表


//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//
//	return slow;
//}
//struct ListNode* reverseList(struct ListNode* head)
//{
//
//	struct ListNode* cur = head;
//	struct ListNode* newhead = NULL;
//
//	while (cur)
//	{
//		//即不断取结点下来，头插到NULL前面去
//		struct ListNode* next = cur->next;
//		
//		cur->next = newhead;
//
//		newhead = cur;
//
//		cur = next;
//
//	}
//	return newhead;
//}
//bool isPalindrome(struct ListNode* head)
//{
//	//1.找中间节点
//	struct ListNode* mid = middleNode(head);
//
//	//2.逆置中间往后的部分链表
//	struct ListNode* rHead = reverseList(mid);
//
//	while (head && rHead)
//	{
//		if (head->val == rHead->val)
//		{
//			head = head->next;
//			rHead = rHead->next;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	return true;
//}


//相交链表
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点
//如果两个链表不存在相交节点，返回 null

//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode *headB)
//{
//	if (headA == NULL || headB == NULL)
//	{
//		return NULL;
//	}
//
//
//	struct ListNode* curA = headA;
//	struct ListNode* curB = headB;
//
//	int lenA = 0;
//	int lenB = 0;
//
//	while (curA)
//	{
//		curA = curA->next;
//		lenA++;
//	}
//
//	while (curB)
//	{
//		curB = curB->next;
//        lenB++;
//	}
//
//	//1.判断是否相交
//	if (curA != curB)
//	{
//		return NULL;
//	}
//
//	struct ListNode* longList = headA;
//	struct ListNode* shortList = headB;
//
//	if (lenB > lenA)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//
//	int gap = abs(lenB - lenA); //求绝对值
//
//	//2.走差距步
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//
//	//3.同时走[此时剩下得一定是相交得]
//	while(longList && shortList)
//    {
//        if(longList == shortList) 
//        {
//            return longList;
//        }
//        else 
//        {
//            longList = longList->next;
//            shortList = shortList->next;
//        }
//    }
//    return NULL;
//}




