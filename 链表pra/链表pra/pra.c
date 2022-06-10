//�ָ�����
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
//	//������������
//	lessTail->next = greaterHead->next;
//	//�ÿգ��������ɳɻ������
//	greaterTail->next = NULL;
//
//	head = lessHead->next;
//	free(greaterHead);
//	free(lessHead);
//
//	return head;
//}


//��������
//����һ���������ͷ�ڵ� head �������жϸ������Ƿ�Ϊ��������


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
//		//������ȡ���������ͷ�嵽NULLǰ��ȥ
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
//	//1.���м�ڵ�
//	struct ListNode* mid = middleNode(head);
//
//	//2.�����м�����Ĳ�������
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


//�ཻ����
//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ�
//����������������ཻ�ڵ㣬���� null

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
//	//1.�ж��Ƿ��ཻ
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
//	int gap = abs(lenB - lenA); //�����ֵ
//
//	//2.�߲�ಽ
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//
//	//3.ͬʱ��[��ʱʣ�µ�һ�����ཻ��]
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




