//˳��ջ
/*
typedef struct
{
	SDataType *base;  // ջ��ָ�룬��==NULL����ջ������
	SDataType *top;  // ջ��ָ�룬��ʼʱtop=base��top==base: ջ��
	int stack_size;
}SqStack

// ����˳��ջ
bool create_stack(SqStack &s)
{
	s.base = (SDataType*)malloc(MAX_SIZE * sizeof(SDataType));
	if (!s.base) return false;
	s.top=s.base;
	s.stack_size = MAX_SIZE;
	return true;
}

*/

//��ջ
/*
bool push(SqStack &s, SDataType e)
{
	if (s.top-s.base==s.stack_size) return false; // ��ջ
	*s.top++ = e;
	return true;
}

*/

//��ջ
/*
bool pop(SqStack &s, SDataType &x)
{
	if (s.top==s.base) return false; // ջ��
	x = *--s.top;
	return true;
}
*/

//ȡ��
/*
bool top(SqStack s, SDataType &x)
{
	if (s.top==s.base) return false; // ջ��
	x = *(s.top-1);
	return true;
}
*/

//������ʽ
/*
typedef StackNode
{
	DataType data;
	struct StackNode *next;
}StackNode, *LinkStack;

void initStack(LinkStack &s)  // ��ʼ�����ÿ�ָ��
{
	s=NULL;
}
*/


//��ջ
/*
bool push(LinkStack &s, DataType e)  // ����󲿲�ջ��ָ�����
{
	StackNode *p = (*StackNode)malloc(sizeof(StackNode));
	if (!p) return false;  // ����ռ�ʧ��
	p->data=e;
	p->next=s
	s=p;
	return true;
}
*/

//��ջ

/*
bool pop(LinkStack &s, DataType &x)
{
	if (s==NULL) return false;
	StackNode* q=s;	
	x=q->data;
	s=s->next;
	free(q);
	return true;
}
*/

//��ֵת�� ��ʮ����ת�˽���

/*
void conversion()
{
	initStack(s);
	scanf("%d", &n);
	while(n)
	{
		push(s, n%8);  // ��תΪ����(10����)����
		n/=8;
	}
	while (!empty(s))
	{
		pop(s, e);
		printf("%d", e);
	}
}
*/