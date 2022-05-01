//队列

//循环队列
/*

  typedef struct
{
	QDataType *base;  // 初始化分配空间
	int front; // 队首元素
	int rear; // 队尾的下一个元素
}SqQueue;

bool InitQueue(SqQueue &q)
{
	q.base=(*QDataType)malloc(MAX_SIZE * sizeof(QDataType));
	if (!q.base) return false;
	q.front = q.rear = 0;
	return true;
}

*/

//入队
/*
bool EnQueue(SqQueue &q, QDataType e)
{
	if ((q.rear+1) % MAX_SIZE == q.front) return false;
	q.base[q.rear] = e;
	q.rear = (q.rear+1) % MAX_SIZE;
	return true;
}

*/

//出队

/*
bool DeQueue(SqQueue &q, QDataType &x)
{
	if (q.rear == q.front) return false;
	x = q.base[q.front];
	q.front = (q.front + 1) % MAX_SIZE;
	return true;
}

*/

//链队
/*
typedef struct QNode
{
	DataType data;
	struct QNode *next;

}QNode, *QPtr;
typedef struct
{
	QPtr front;
	QPtr rear;
}LinkQueue;

bool InitQueue(LinkQueue &q)  // 建立头指针的链队
{
	p=(*QNode)malloc(sizeof(QNode));
	if (!p) return false;
	p->next = NULL;
	q.front = q.rear = p;
	return true;
}
*/

//入队

/*
bool EnQueue(LinkQueue &q, DataType d)
{
	p = (*QNode)malloc(sizeof(QNode));
	if (!p) return false;
	p->data = d;
	p->next = NULL;
	q.rear->next = p;
	q.rear = p;
	return true;
}

*/

//出队

/*
bool DeQueue(LinkQueue &q, DataType &d)
{
	if (q.rear == q.front) return false;
	p = q.front->next;
	d = p->data;
	q.front->next = p->next;
	if (p == q.rear) q.rear = q.front;  // 最后一个元素出队后，要手动把rear=front
	free(p);
	return true;
}

*/