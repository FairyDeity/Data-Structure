//˳�����Ա�
//˳���
/*
typedef struct 
{
	DataType *sqlist;
	int length;
}SqList;
*/

//������
/*

typedef struct Node
{
	DataType data;
	struct Node *next;
}Node *LinkedList;

*/
// һ�㽨����������������һ��ͷ���

//1.����
/*

p=L->next; 
while(p)
{
	// ���������㣬��p��ʾ
	p=p->next;
}

*/

//2.����
// ͷ�巨��s����p����
/*

Node *s = (*Node)malloc(sizeof(Node))
s->next = p->next;
p->next = s;

*/

//3.ɾ��

/*

// ɾ��p�ĺ�̣���������ֻ��ɾ��̣����Լǵñ���һ��ǰ�����pre��
s = p->next;
p->next = s->next;
free(s);

*/


//4.����

/*
void createList(LinkedList &L, DataType array[], int length)
// ͷ�巨
p=L
for (i=0; i<length; ++i)
{
	Node* s = (*Node)malloc(sizeof(Node))
	s->data=array[i];
	s->next = p->next;
	p->next = s;
}
// β�巨
r=L;
for (i=0; i<length; ++i)
{
	Node* s = (*Node)malloc(sizeof(Node))
	s->data=array[i];
	s->next = NULL;
	r->next = s;
	r=s;
}

*/



//Ӧ�ã�1.��������ĺϲ�

/*
void combine(List &a, List &b, List &c) // a��b�ϲ���c�����Ҳ�ռ�����ڴ�ռ�
{
	p1=a->next, p2=b->next;
	c=a;  // ��c��a��ͷ���
	pc=c;
	while (p1 && p2)
	{
	// ѡ��a��b�Ľ����С��һ��������c�����
		if (p1->data < p2->data) 
		{
			pc->next=p1;
			pc=p1;
			p1=p1->next;
		}
		else
		{
			pc->next=p2;
			pc=p2;
			p2=p2->next;
		}
		
	}
	if (!p1) pc->next=p2;
	if (!p2) pc->next=p1;
	free(b);
}

  */

//2.����ԭ�ط���


/*

void reverse_list(List &L)
{  // ͬʱ��¼����ָ�룺pre, p, pNext��ÿ���ȱ���pNext����pָ��pre
	p=L->next; pre=L;
	while (p)
	{
		pNext=p->next;
		p->next=pre;
		pre=p;
		p=pNext;
	}
}
*/