//树的遍历
//先根遍历
void PreOrder(TreeNode *R){
   if(R!=NULL){
      visit(R);    //访问根节点
      while(R还有下一个子树T)
         PreOrder(T);      //先跟遍历下一个子树
   }
}

//后根遍历
void PostOrder(TreeNode *R){
   if(R!=NULL){
      while(R还有下一个子树T)
         PostOrder(T);      //后跟遍历下一个子树
      visit(R);    //访问根节点
   }
}

//树与二叉树的应用
//二叉排序树
typedef struct BSTNode{
   int key;
   struct BSTNode *lchild, *rchild;
}BSTNode, *BSTree;

//在二叉排序树中查找值为key的结点（非递归）
//最坏空间复杂度：O(1)
BSTNode *BST_Search(BSTree T, int key){
   while(T!=NULL && key!=T->key){        //若树空或等于跟结点值，则结束循环
      if(key<T->key)       //值小于根结点值，在左子树上查找
         T = T->lchild;
      else                  //值大于根结点值，在右子树上查找
         T = T->rchild;
   }
   return T;
}

//在二叉排序树中查找值为key的结点（递归）
//最坏空间复杂度：O(h)
BSTNode *BSTSearch(BSTree T, int key){
   if(T == NULL)
      return NULL;
   if(Kry == T->key)
      return T;
   else if(key < T->key)
      return BSTSearch(T->lchild, key);
   else 
      return BSTSearch(T->rchild, key);
}


//插入操作
//在二叉排序树中插入关键字为k的新结点（递归）
//最坏空间复杂度：O(h)
int BST_Insert(BSTree &T, int k){
   if(T==NULL){           //原树为空，新插入的结点为根结点
      T = (BSTree)malloc(sizeof(BSTNode));
      T->key = k;
      T->lchild = T->rchild = NULL;
      return 1;                       //插入成功
   }
   else if(K == T->key)               //树中存在相同关键字的结点，插入失败
      return 0;
   else if(k < T->key)                 
      return BST_Insert(T->lchild,k);
   else 
      return BST_Insert(T->rchild,k);
}
//二叉排序树的构造
//按照str[]中的关键字序列建立二叉排序树
void Crear_BST(BSTree &T, int str[], int n){
   T = NULL;                     //初始时T为空树
   int i=0;
   while(i<n){
      BST_Insert(T,str[i]);     //依次将每个关键字插入到二叉排序树中
      i++;
   }
}

//平衡二叉树
//定义


//平衡二叉树结点
typedef struct AVLNode{
   int key;         //数据域
   int balance;     //平衡因子
   struct AVLNode *lchild; *rchild; 
}AVLNode, *AVLTree;



