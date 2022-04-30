//顺序栈
/*
typedef struct
{
	SDataType *base;  // 栈底指针，若==NULL，则栈不存在
	SDataType *top;  // 栈顶指针，初始时top=base，top==base: 栈空
	int stack_size;
}SqStack

// 创建顺序栈
bool create_stack(SqStack &s)
{
	s.base = (SDataType*)malloc(MAX_SIZE * sizeof(SDataType));
	if (!s.base) return false;
	s.top=s.base;
	s.stack_size = MAX_SIZE;
	return true;
}

*/

//入栈
/*
bool push(SqStack &s, SDataType e)
{
	if (s.top-s.base==s.stack_size) return false; // 满栈
	*s.top++ = e;
	return true;
}

*/

//出栈
/*
bool pop(SqStack &s, SDataType &x)
{
	if (s.top==s.base) return false; // 栈空
	x = *--s.top;
	return true;
}
*/

//取顶
/*
bool top(SqStack s, SDataType &x)
{
	if (s.top==s.base) return false; // 栈空
	x = *(s.top-1);
	return true;
}
*/

//链表形式
/*
typedef StackNode
{
	DataType data;
	struct StackNode *next;
}StackNode, *LinkStack;

void initStack(LinkStack &s)  // 初始化，置空指针
{
	s=NULL;
}
*/


//入栈
/*
bool push(LinkStack &s, DataType e)  // 插入后部并栈顶指针后移
{
	StackNode *p = (*StackNode)malloc(sizeof(StackNode));
	if (!p) return false;  // 分配空间失败
	p->data=e;
	p->next=s
	s=p;
	return true;
}
*/

//出栈

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

//数值转换 ：十进制转八进制

/*
void conversion()
{
	initStack(s);
	scanf("%d", &n);
	while(n)
	{
		push(s, n%8);  // 可转为任意(10以下)进制
		n/=8;
	}
	while (!empty(s))
	{
		pop(s, e);
		printf("%d", e);
	}
}
*/