//������
//1.˳��洢
/*#define MaxSize 100

struct TreeNode{
   ElemType value; //����е�����Ԫ��
   bool isEmpty;   //����Ƿ�Ϊ��
}

main(){
   TreeNode t[MaxSize];
   for (int i=0; i<MaxSize; i++){
      t[i].isEmpty = true;
   }
}
*/

//2.��ʽ�洢

/*
//�������Ľ��

struct ElemType{
   int value;
};

typedef struct BiTnode{
   ElemType data;          //������
   struct BiTNode *lchild, *rchild; //���Һ���ָ��
}BiTNode, *BiTree;

//����һ�ÿ���
BiTree root = NULL;

//������ڵ�
root = (BiTree) malloc (sizeof(BiTNode));
root -> data = {1};
root -> lchild = NULL;
root -> rchild = NULL;

//�����½��
BiTNode *p = (BiTree) malloc (sizeof(BiTNode));
p -> data = {2};
p -> lchild = NULL;
p -> rchild = NULL;
root -> lchild = p; //��Ϊ���ڵ������

*/

//�������ı���
/*

//1.�������
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void PreOrder(BiTree T){
   if(T!=NULL){
      visit(T);                 //���ʸ����
      PreOrder(T->lchild);      //�ݹ����������
      PreOrder(T->rchild);      //�ݹ����������
   }
}

*/

//2.�������
/*
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void InOrder(BiTree T){
   if(T!=NULL){
      InOrder(T->lchild);       //�ݹ����������
      visit(T);                 //���ʸ����
      InOrder(T->rchild);       //�ݹ����������
   }
}

*/

//3.�������
/*
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void PostOrder(BiTree T){
   if(T!=NULL){
      PostOrder(T->lchild);       //�ݹ����������    
      PostOrder(T->rchild);       //�ݹ����������
      visit(T);                 //���ʸ����
   }
}

*/

//�������Ĳ�α���

/*
//�������Ľ��(��ʽ�洢)
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

//��ʽ���н��
typedef struct LinkNode{
   BiTNode * data;
   typedef LinkNode *next;
}LinkNode;

typedef struct{
   LinkNode *front, *rear;  
}LinkQueue;

//�������
void LevelOrder(BiTree T){
   LinkQueue Q;
   InitQueue (Q);          //��ʼ����������
   BiTree p;
   EnQueue(Q,T);           //�����ڵ����
   while(!isEmpty(Q)){     //���в�����ѭ��
      DeQueue(Q,p);        //��ͷ������
      visit(p);            //���ʳ��ӽ��
      if(p->lchild != NULL)
         EnQueue(Q,p->lchild);   //�������
      if(p->rchild != NULL)
         EnQueue(Q,p->rchild);   //�Һ������
   }
}

*/
