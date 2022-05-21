//线索二叉树结点

/*
typedef struct ThreadNode{
   ElemType data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // 左、右线索标志
}ThreadNode, *ThreadTree;
*/


//中序线索化
/*typedef struct ThreadNode{
   ElemType data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // 左、右线索标志
}ThreadNode, *ThreadTree;
//全局变量pre, 指向当前访问的结点的前驱
TreadNode *pre=NULL;

void InThread(ThreadTree T){
    if(T!=NULL){
        InThread(T->lchild);    //中序遍历左子树
        visit(T);               //访问根节点
        InThread(T->rchild);    //中序遍历右子树
    }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //左子树为空，建立前驱线索   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //建立前驱结点的后继线索
      pre->rtag = 1;
   }
   pre = q;
}

//中序线索化二叉树T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre初始为NULL
   if(T!=NULL);{              //非空二叉树才能进行线索化
      InThread(T);            //中序线索化二叉树
      if(pre->rchild == NULL)
         pre->rtag=1;         //处理遍历的最后一个结点
   }
}

*/

//先序线索化

/*
typedef struct ThreadNode{
   int data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // 左、右线索标志
}ThreadNode, *ThreadTree;

//全局变量pre, 指向当前访问的结点的前驱
TreadNode *pre=NULL;

//先序遍历二叉树，一边遍历一边线索化
void PreThread(ThreadTree T){
   if(T!=NULL){
      visit(T);
      if(T->ltag == 0)         //lchild不是前驱线索
         PreThread(T->lchild);
      PreThread(T->rchild);
   }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //左子树为空，建立前驱线索   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //建立前驱结点的后继线索
      pre->rtag = 1;
   }
   pre = q;
}

//先序线索化二叉树T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre初始为NULL
   if(T!=NULL);{              //非空二叉树才能进行线索化
      PreThread(T);            //先序线索化二叉树
      if(pre->rchild == NULL)
         pre->rtag=1;         //处理遍历的最后一个结点
   }
}

*/


//后序线索化

/*
typedef struct ThreadNode{
   int data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // 左、右线索标志
}ThreadNode, *ThreadTree;

//全局变量pre, 指向当前访问的结点的前驱
TreadNode *pre=NULL;

//先序遍历二叉树，一边遍历一边线索化
void PostThread(ThreadTree T){
   if(T!=NULL){
      PostThread(T->lchild);
      PostThread(T->rchild);
      visit(T);                  //访问根节点
   }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //左子树为空，建立前驱线索   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //建立前驱结点的后继线索
      pre->rtag = 1;
   }
   pre = q;
}

//先序线索化二叉树T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre初始为NULL
   if(T!=NULL);{              //非空二叉树才能进行线索化
      PostThread(T);            //后序线索化二叉树
      if(pre->rchild == NULL)
         pre->rtag=1;         //处理遍历的最后一个结点
   }
}

*/
//线索二叉树中找前驱后继
/*
若 p->rtag == 1, 则 next = p->rchild;

若 p->rtag == 0, 则 p 必有右孩子, 则 next = p的右子树中最左下结点;
*/

//1. 找到以P为根的子树中，第一个被中序遍历的结点
ThreadNode *Firstnode(ThreadNode *p){
   //循环找到最左下的结点（不一定是叶结点）
   while(p->ltag == 0)
      p=p->lchild;
   return p;
}

//2. 在中序线索二叉树中找到结点p的后继结点
ThreadNode *Nextnode(ThreadNode *p){
   //右子树最左下结点
   if(p->rtag==0)
      return Firstnode(p->rchild);
   else 
      return p->rchild; //rtag==1，直接返回后继线索
}

//3. 对中序线索二叉树进行中序遍历
void Inorder(ThreadNode *T){            //T为根节点指针
   for(ThreadNode *p = Firstnode(T); p!=NULL; p = Nextnode(p))
      visit(p);
}



