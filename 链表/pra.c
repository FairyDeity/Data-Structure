
/* ɾ����L�еĵ�i��Ԫ��*/
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
/* ���±�Ϊk�Ŀ��н����յ���������*/

void Free_SLL(StaticLinkList space ,int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

/* ����L������Ԫ�ظ���*/
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


/*�����ҵ�δ֪���ȵ�������м���*/

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
//  ����ṹ��
typedef struct CLinkList
{
    int data;
    struct CLinkList *next;
}node;


//  ��ʼ��ѭ������
void ds_init(node **pNode)
{
    int item;
    node *temp;
    node *target;
    
    printf("�������ֵ������0�����������\n");
    
    while(1)
    {
        scanf("%d", &item);
        fflush(stdin);
        
        if (item == 0)
        {
            return;
        }
        
        //  ���ԭ�ȵ������ǿձ�
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

//  �ڵ�i�����ǰ������
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
        //  �ҵ����һ�����
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

//  ɾ����i�����
void ds_delete(node **pNode, int i)
{
    node *temp;
    node *target;
    int j = 1;
    
    if (i == 1)
    {
        //  �ҵ����һ�����
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


//  ���ؽ�����ڵ�λ��
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

//  ��ʾ����Ԫ��
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
    printf("18�������е�λ���ǣ� %d \n",ds_search(L, 18));
    
    
    //printf("Hello, World!\n");
    return 0;
}
