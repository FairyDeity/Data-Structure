//二叉树
//1.顺序存储
/*#define MaxSize 100

struct TreeNode{
   ElemType value; //结点中的数据元素
   bool isEmpty;   //结点是否为空
}

main(){
   TreeNode t[MaxSize];
   for (int i=0; i<MaxSize; i++){
      t[i].isEmpty = true;
   }
}
*/

//2.链式存储

/*
//二叉树的结点

struct ElemType{
   int value;
};

typedef struct BiTnode{
   ElemType data;          //数据域
   struct BiTNode *lchild, *rchild; //左、右孩子指针
}BiTNode, *BiTree;

//定义一棵空树
BiTree root = NULL;

//插入根节点
root = (BiTree) malloc (sizeof(BiTNode));
root -> data = {1};
root -> lchild = NULL;
root -> rchild = NULL;

//插入新结点
BiTNode *p = (BiTree) malloc (sizeof(BiTNode));
p -> data = {2};
p -> lchild = NULL;
p -> rchild = NULL;
root -> lchild = p; //作为根节点的左孩子

*/

//二叉树的遍历
/*

//1.先序遍历
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void PreOrder(BiTree T){
   if(T!=NULL){
      visit(T);                 //访问根结点
      PreOrder(T->lchild);      //递归遍历左子树
      PreOrder(T->rchild);      //递归遍历右子树
   }
}

*/

//2.中序遍历
/*
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void InOrder(BiTree T){
   if(T!=NULL){
      InOrder(T->lchild);       //递归遍历左子树
      visit(T);                 //访问根结点
      InOrder(T->rchild);       //递归遍历右子树
   }
}

*/

//3.后序遍历
/*
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

void PostOrder(BiTree T){
   if(T!=NULL){
      PostOrder(T->lchild);       //递归遍历左子树    
      PostOrder(T->rchild);       //递归遍历右子树
      visit(T);                 //访问根结点
   }
}

*/

//二叉树的层次遍历

/*
//二叉树的结点(链式存储)
typedef struct BiTnode{
   ElemType data;          
   struct BiTNode *lchild, *rchild; 
}BiTNode, *BiTree;

//链式队列结点
typedef struct LinkNode{
   BiTNode * data;
   typedef LinkNode *next;
}LinkNode;

typedef struct{
   LinkNode *front, *rear;  
}LinkQueue;

//层序遍历
void LevelOrder(BiTree T){
   LinkQueue Q;
   InitQueue (Q);          //初始化辅助队列
   BiTree p;
   EnQueue(Q,T);           //将根节点入队
   while(!isEmpty(Q)){     //队列不空则循环
      DeQueue(Q,p);        //队头结点出队
      visit(p);            //访问出队结点
      if(p->lchild != NULL)
         EnQueue(Q,p->lchild);   //左孩子入队
      if(p->rchild != NULL)
         EnQueue(Q,p->rchild);   //右孩子入队
   }
}

*/
