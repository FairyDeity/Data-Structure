//顺序线性表：
//顺序表
/*
typedef struct 
{
	DataType *sqlist;
	int length;
}SqList;
*/

//单链表
/*

typedef struct Node
{
	DataType data;
	struct Node *next;
}Node *LinkedList;

*/
// 一般建立单链表，都会设立一个头结点

//1.查找
/*

p=L->next; 
while(p)
{
	// 遍历链表结点，用p表示
	p=p->next;
}

*/

//2.插入
// 头插法把s插入p结点后
/*

Node *s = (*Node)malloc(sizeof(Node))
s->next = p->next;
p->next = s;

*/

//3.删除

/*

// 删除p的后继（单链表中只能删后继，所以记得保存一个前驱结点pre）
s = p->next;
p->next = s->next;
free(s);

*/


//4.建立

/*
void createList(LinkedList &L, DataType array[], int length)
// 头插法
p=L
for (i=0; i<length; ++i)
{
	Node* s = (*Node)malloc(sizeof(Node))
	s->data=array[i];
	s->next = p->next;
	p->next = s;
}
// 尾插法
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



//应用：1.有序链表的合并

/*
void combine(List &a, List &b, List &c) // a和b合并到c链表，且不占用新内存空间
{
	p1=a->next, p2=b->next;
	c=a;  // 让c用a的头结点
	pc=c;
	while (p1 && p2)
	{
	// 选择a和b的结点中小的一个，插入c表后面
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

//2.链表原地反向


/*

void reverse_list(List &L)
{  // 同时记录三个指针：pre, p, pNext；每次先保存pNext，把p指向pre
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