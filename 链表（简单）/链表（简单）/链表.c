//移除链表元素
//一个链表的头节点 head 和一个整数 val ，删除链表中所有满足 Node.val == val的节点，并返回新的头节点


//struct ListNode* removeElements(struct ListNode*head, int val)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	
//	//边走边删除 
//	//直至cur走到NULL就停止
//	while (cur) 
//	{
//		//要删除结点时：
//		if (cur->val == val)
//		{
//		
//			struct ListNode* next = cur->next;
//
//			//说明要删的是 第一个结点
//			if (prev == NULL) 
//			{
//				free(cur);
//				head = next;
//				cur = next;
//			}
//			else
//			{
//				free(cur);
//				prev->next = next;
//				cur = next;
//			}
//		}
//		//不需要删除结点时：
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;  
//}


//反转链表

//1.三指针循环反转
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//
//	struct ListNode* n1 = NULL;
//	struct ListNode* n2 = head;
//	struct ListNode* n3 = head->next;
//
//	while (n2)
//	{
//		//翻转
//		n2->next = n1;
//
//		//迭代 -- 循环一致往后走
//		n1 = n2;
//		n2 = n3;
//
//		//最后一步的时候：n3有可能为NULL
//		//所以需要提前判断
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//
//	}
//	return n1;
//}

//2.头插反转（迭代）
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

//找出链表的中间结点

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

//找出链表中倒数第k个结点

//struct ListNode* getKthFromEnd(struct ListNode* head, int k)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//
//	//fast先走k步
//	while (k--)
//	{
//		//如果k还没走完，fast就为NULL了
//		if (fast == NULL)
//		{
//			//说明K比链表长度都要长
//			//也说明 链表可能为空
//			return NULL;
//		}
//
//		fast = fast->next;
//	}
//
//	//再同时走
//	//fast为NULL的时候结束
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}


//合并两个有序链表

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* l1 = list1;
//    struct ListNode* l2 = list2;
//
//    if (l1 == NULL)
//	{
//		return l2;
//	}
//	
//	if (l2 == NULL)
//	{
//		return l1;
//	}
//
//	struct ListNode* head = NULL;
//	struct ListNode* tail = NULL;
//
//	if (l1->val < l2->val) //但是，如果这里任意一个是 NULL的话，就崩了 ; 所以上面得加上 判断
//	{
//		//先直接判定谁的第一个元素 作为 新链表的头
//		//先取一个小的 去作 头
//		head = tail = l1;
//		l1 = l1->next;
//	}
//	else
//	{
//		head = tail = l2;
//		l2 = l2->next;
//	}
//
//	while (l1 && l2) //两个都没结束，就继续
//	{
//		//取小的尾插到新链表
//		if (l1->val < l2->val)
//		{
//			tail->next = l1;
//			l1 = l1->next;
//			tail = tail->next;
//		}
//		else
//		{
//			tail->next = l2;
//			l2 = l2->next;
//			tail = tail->next;
//		}
//	}
//
//	//结束了，如果有一方还部位NULL，则把其剩下的全链 到 新链表上
//	if (l1)
//	{
//		tail->next = l1;
//	}
//	else
//	{
//		tail->next = l2;
//	}
//
//	return head;
//}



