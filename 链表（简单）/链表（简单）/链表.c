//�Ƴ�����Ԫ��
//һ�������ͷ�ڵ� head ��һ������ val ��ɾ���������������� Node.val == val�Ľڵ㣬�������µ�ͷ�ڵ�


//struct ListNode* removeElements(struct ListNode*head, int val)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	
//	//���߱�ɾ�� 
//	//ֱ��cur�ߵ�NULL��ֹͣ
//	while (cur) 
//	{
//		//Ҫɾ�����ʱ��
//		if (cur->val == val)
//		{
//		
//			struct ListNode* next = cur->next;
//
//			//˵��Ҫɾ���� ��һ�����
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
//		//����Ҫɾ�����ʱ��
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;  
//}


//��ת����

//1.��ָ��ѭ����ת
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
//		//��ת
//		n2->next = n1;
//
//		//���� -- ѭ��һ��������
//		n1 = n2;
//		n2 = n3;
//
//		//���һ����ʱ��n3�п���ΪNULL
//		//������Ҫ��ǰ�ж�
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//
//	}
//	return n1;
//}

//2.ͷ�巴ת��������
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

//�ҳ�������м���

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

//�ҳ������е�����k�����

//struct ListNode* getKthFromEnd(struct ListNode* head, int k)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//
//	//fast����k��
//	while (k--)
//	{
//		//���k��û���꣬fast��ΪNULL��
//		if (fast == NULL)
//		{
//			//˵��K�������ȶ�Ҫ��
//			//Ҳ˵�� �������Ϊ��
//			return NULL;
//		}
//
//		fast = fast->next;
//	}
//
//	//��ͬʱ��
//	//fastΪNULL��ʱ�����
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}


//�ϲ�������������

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
//	if (l1->val < l2->val) //���ǣ������������һ���� NULL�Ļ����ͱ��� ; ��������ü��� �ж�
//	{
//		//��ֱ���ж�˭�ĵ�һ��Ԫ�� ��Ϊ �������ͷ
//		//��ȡһ��С�� ȥ�� ͷ
//		head = tail = l1;
//		l1 = l1->next;
//	}
//	else
//	{
//		head = tail = l2;
//		l2 = l2->next;
//	}
//
//	while (l1 && l2) //������û�������ͼ���
//	{
//		//ȡС��β�嵽������
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
//	//�����ˣ������һ������λNULL�������ʣ�µ�ȫ�� �� ��������
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



