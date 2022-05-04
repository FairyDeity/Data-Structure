
/*********

typedef int QElemType;
//typedef struct BTNode* QElemType;
typedef struct QNode
{
	QElemType data;
	struct QNode *_pNext;
}QNode;

typedef struct LQueue
{
	QNode *pFront;
	QNode *pRear;
}LQueue;


//��ʼ��
void LQueueInit(LQueue *q);

//�����
void LQueuePush(LQueue *q, QElemType data);

//������
void LQueuePop(LQueue *q);

//���ض�ͷԪ��
QElemType LQueueTop(LQueue *q);

//���ط��ض��г���
int LQueueSize(LQueue *q);

//�����Ƿ�Ϊ��
int LQueueEmpty(LQueue *q);


/************************************************/
//LQueue.c
/**************************
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

//�����½��
static QNode *BuyLQNode(QElemType data)
{
	QNode *pLQNode = (QNode *)malloc(sizeof(QNode));
	if (NULL == pLQNode)
	{
		printf("����ռ�ʧ��!\n");
		assert(pLQNode);
	}
	pLQNode->data = data;
	pLQNode->_pNext = NULL;

	return pLQNode;
}

//��ʼ��
void LQueueInit(LQueue *q)
{
	assert(q);
	q->pFront = q->pRear = NULL;
}

//�����
void LQueuePush(LQueue *q, QElemType data)
{
	assert(q);
	if (NULL == q->pFront)
	{
		q->pFront = q->pRear = BuyLQNode(data);
		return;
	}
	q->pRear->_pNext = BuyLQNode(data);
	q->pRear = q->pRear->_pNext;
}

//������
void LQueuePop(LQueue *q)
{
	assert(q);
	QNode *pDel;
	if (NULL == q->pFront)
	{
		return;
	}

	if (q->pFront == q->pRear)
	{
		q->pRear = NULL;
	}

	pDel = q->pFront;
	q->pFront = q->pFront->_pNext;
	free(pDel);
}

//���ض�ͷԪ��
QElemType LQueueTop(LQueue *q)
{
	assert(q);
	return q->pFront->data;
}

//���ض�βԪ��
QElemType LQueueBack(LQueue *q)
{
	assert(q);
	return q->pRear->data;
}

//���ط��ض��г���
int LQueueSize(LQueue *q)
{
	int count = 0;
	QNode *pCur;
	assert(q);
	pCur = q->pFront;
	while (pCur)
	{
		pCur = pCur->_pNext;
		count++;
	}
	return count;
}

//�����Ƿ�Ϊ��
int LQueueEmpty(LQueue *q)
{
	return NULL == q->pFront;
}

  ****************************/