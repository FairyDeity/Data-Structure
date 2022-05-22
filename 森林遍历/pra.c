//���ı���
//�ȸ�����
void PreOrder(TreeNode *R){
   if(R!=NULL){
      visit(R);    //���ʸ��ڵ�
      while(R������һ������T)
         PreOrder(T);      //�ȸ�������һ������
   }
}

//�������
void PostOrder(TreeNode *R){
   if(R!=NULL){
      while(R������һ������T)
         PostOrder(T);      //���������һ������
      visit(R);    //���ʸ��ڵ�
   }
}

//�����������Ӧ��
//����������
typedef struct BSTNode{
   int key;
   struct BSTNode *lchild, *rchild;
}BSTNode, *BSTree;

//�ڶ����������в���ֵΪkey�Ľ�㣨�ǵݹ飩
//��ռ临�Ӷȣ�O(1)
BSTNode *BST_Search(BSTree T, int key){
   while(T!=NULL && key!=T->key){        //�����ջ���ڸ����ֵ�������ѭ��
      if(key<T->key)       //ֵС�ڸ����ֵ�����������ϲ���
         T = T->lchild;
      else                  //ֵ���ڸ����ֵ�����������ϲ���
         T = T->rchild;
   }
   return T;
}

//�ڶ����������в���ֵΪkey�Ľ�㣨�ݹ飩
//��ռ临�Ӷȣ�O(h)
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


//�������
//�ڶ����������в���ؼ���Ϊk���½�㣨�ݹ飩
//��ռ临�Ӷȣ�O(h)
int BST_Insert(BSTree &T, int k){
   if(T==NULL){           //ԭ��Ϊ�գ��²���Ľ��Ϊ�����
      T = (BSTree)malloc(sizeof(BSTNode));
      T->key = k;
      T->lchild = T->rchild = NULL;
      return 1;                       //����ɹ�
   }
   else if(K == T->key)               //���д�����ͬ�ؼ��ֵĽ�㣬����ʧ��
      return 0;
   else if(k < T->key)                 
      return BST_Insert(T->lchild,k);
   else 
      return BST_Insert(T->rchild,k);
}
//�����������Ĺ���
//����str[]�еĹؼ������н�������������
void Crear_BST(BSTree &T, int str[], int n){
   T = NULL;                     //��ʼʱTΪ����
   int i=0;
   while(i<n){
      BST_Insert(T,str[i]);     //���ν�ÿ���ؼ��ֲ��뵽������������
      i++;
   }
}

//ƽ�������
//����


//ƽ����������
typedef struct AVLNode{
   int key;         //������
   int balance;     //ƽ������
   struct AVLNode *lchild; *rchild; 
}AVLNode, *AVLTree;



