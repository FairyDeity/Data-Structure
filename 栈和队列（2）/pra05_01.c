//����

//ѭ������
/*

  typedef struct
{
	QDataType *base;  // ��ʼ������ռ�
	int front; // ����Ԫ��
	int rear; // ��β����һ��Ԫ��
}SqQueue;

bool InitQueue(SqQueue &q)
{
	q.base=(*QDataType)malloc(MAX_SIZE * sizeof(QDataType));
	if (!q.base) return false;
	q.front = q.rear = 0;
	return true;
}

*/

//���
/*
bool EnQueue(SqQueue &q, QDataType e)
{
	if ((q.rear+1) % MAX_SIZE == q.front) return false;
	q.base[q.rear] = e;
	q.rear = (q.rear+1) % MAX_SIZE;
	return true;
}

*/

//����

/*
bool DeQueue(SqQueue &q, QDataType &x)
{
	if (q.rear == q.front) return false;
	x = q.base[q.front];
	q.front = (q.front + 1) % MAX_SIZE;
	return true;
}

*/

//����
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

bool InitQueue(LinkQueue &q)  // ����ͷָ�������
{
	p=(*QNode)malloc(sizeof(QNode));
	if (!p) return false;
	p->next = NULL;
	q.front = q.rear = p;
	return true;
}
*/

//���

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

//����

/*
bool DeQueue(LinkQueue &q, DataType &d)
{
	if (q.rear == q.front) return false;
	p = q.front->next;
	d = p->data;
	q.front->next = p->next;
	if (p == q.rear) q.rear = q.front;  // ���һ��Ԫ�س��Ӻ�Ҫ�ֶ���rear=front
	free(p);
	return true;
}

*/