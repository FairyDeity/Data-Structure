
/* 删除在L中的第i个元素*/
Status ListDelete(StaticLinkList L,int i)
{
	int i, k;

	if(i<1 || i>ListLength(L))
	{
		return ERROR;
	}

		k = MAX_SIZE -1;

		for(j=1;j<=i-1;j++)
		{
			k = L[k].cur;

		}

		j = L[k].cur;
		L[k].cur = L[j].cur;

		Free_SLL(L,j);

		return OK;

}
/* 将下标为k的空闲结点回收到备用链表*/

void Free_SLL(StaticLinkList space ,int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

/* 返回L中数据元素个数*/
int ListLength(StaticLinkList L)
{
	int j = 0;
	int i = L[,MAXSIZE -1].cur;

	while(i)
	{
		i = L[i].cur;
		j++;
	}
      return j;
}


/*快速找到未知长度单链表的中间结点*/

Status GetMidNode(LinkList L ,ElemType *e)

{
	LinkList search,mid;
	mid = search = L;
	while (search->next!=NULL)
	{
		if(search->next->next !=NULL)
		{
			search = search->next->next;
			mid = mid->next;
		}
		else
		{
			search = search->next;
		}
	}
	*e = mid->data;
	return OK;
}

#include <stdio.h>
#include <stdlib.h>

typedef int Elemtype;
//  定义结构体
typedef struct CLinkList
{
    int data;
    struct CLinkList *next;
}node;


//  初始化循环链表
void ds_init(node **pNode)
{
    int item;
    node *temp;
    node *target;
    
    printf("输入结点的值，输入0代表结束输入\n");
    
    while(1)
    {
        scanf("%d", &item);
        fflush(stdin);
        
        if (item == 0)
        {
            return;
        }
        
        //  如果原先的链表是空表
        if ((*pNode) == NULL)
        {
            *pNode = (node*) malloc(sizeof(struct CLinkList));
            (*pNode)->data = item;
            (*pNode)->next = *pNode;
        }
        
        else
        {
            for (target = (*pNode); target->next != (*pNode); target = target->next);
            
            temp = (node*) malloc(sizeof(struct CLinkList));
            
            if(!temp)
                exit(0);
            
            temp->data = item;
            temp->next = *pNode;
            target->next = temp;
            
        }
    }
}

//  在第i个结点前插入结点
void ds_insert(node **pNode, int i, int item)
{
    node *temp;
    node *target;
    node *p;
    
    int j = 1;
    
    if (i == 1)
    {
        temp = (node*) malloc(sizeof(struct CLinkList));
        if(!temp)
            exit(0);
        
        temp->data = item;
        //  找到最后一个结点
        for (target = (*pNode); target->next != (*pNode); target = target->next);
        
        temp->next = *pNode;
        target->next = temp;
        *pNode = temp;
    }
    else
    {
        target = *pNode;
        for (; j < i-1; j++)
        {
            target = target->next;
        }
        
        temp = (node*)malloc(sizeof(struct CLinkList));
        
        if(!temp)
            exit(0);
        
        temp->data = item;
        p = target->next;
        target->next = temp;
        temp->next = p;
    }
}

//  删除第i个结点
void ds_delete(node **pNode, int i)
{
    node *temp;
    node *target;
    int j = 1;
    
    if (i == 1)
    {
        //  找到最后一个结点
        for (target = (*pNode); target->next != (*pNode); target = target->next);
        temp = *pNode;
        target->next = temp->next;
        
        free(temp);
    }
    else
    {
        target = *pNode;
        
        for (; j < i-1; ++j)
        {
            target = target->next;
        }
        temp = target->next;
        target->next = temp->next;
        free(temp);
    }
}


//  返回结点所在的位置
int ds_search(node *pNode, Elemtype elem)
{
    node *target;
    int i = 1;
    
    for (target = pNode; target->data != elem && target->next != pNode; ++i)
    {
        target = target->next;
    }
    
    if (target->next == pNode)
    {
        return 0;
    }
    else
        return i;
}

//  显示链表元素
void ds_show(node *pNode)
{
    node *temp;
    int data = 0;
    
    for (temp = pNode; temp->next != pNode; temp = temp->next)
    {
        data = temp->data;
        printf("%d ", data);
    }
    printf("%d \n",temp->data);
}

int main(int argc, const char * argv[])
{
    node *L;
    ds_init(&L);
    ds_show(L);
    ds_insert(&L, 3, 18);
    ds_show(L);
    ds_delete(&L, 4);
    ds_show(L);
    printf("18在链表中的位置是： %d \n",ds_search(L, 18));
    
    
    //printf("Hello, World!\n");
    return 0;
}
