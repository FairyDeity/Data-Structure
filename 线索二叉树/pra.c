//�������������

/*
typedef struct ThreadNode{
   ElemType data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // ����������־
}ThreadNode, *ThreadTree;
*/


//����������
/*typedef struct ThreadNode{
   ElemType data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // ����������־
}ThreadNode, *ThreadTree;
//ȫ�ֱ���pre, ָ��ǰ���ʵĽ���ǰ��
TreadNode *pre=NULL;

void InThread(ThreadTree T){
    if(T!=NULL){
        InThread(T->lchild);    //�������������
        visit(T);               //���ʸ��ڵ�
        InThread(T->rchild);    //�������������
    }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //������Ϊ�գ�����ǰ������   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //����ǰ�����ĺ������
      pre->rtag = 1;
   }
   pre = q;
}

//����������������T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre��ʼΪNULL
   if(T!=NULL);{              //�ǿն��������ܽ���������
      InThread(T);            //����������������
      if(pre->rchild == NULL)
         pre->rtag=1;         //������������һ�����
   }
}

*/

//����������

/*
typedef struct ThreadNode{
   int data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // ����������־
}ThreadNode, *ThreadTree;

//ȫ�ֱ���pre, ָ��ǰ���ʵĽ���ǰ��
TreadNode *pre=NULL;

//���������������һ�߱���һ��������
void PreThread(ThreadTree T){
   if(T!=NULL){
      visit(T);
      if(T->ltag == 0)         //lchild����ǰ������
         PreThread(T->lchild);
      PreThread(T->rchild);
   }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //������Ϊ�գ�����ǰ������   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //����ǰ�����ĺ������
      pre->rtag = 1;
   }
   pre = q;
}

//����������������T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre��ʼΪNULL
   if(T!=NULL);{              //�ǿն��������ܽ���������
      PreThread(T);            //����������������
      if(pre->rchild == NULL)
         pre->rtag=1;         //������������һ�����
   }
}

*/


//����������

/*
typedef struct ThreadNode{
   int data;
   struct ThreadNode *lchild, *rchild;
   int ltag, rtag;                // ����������־
}ThreadNode, *ThreadTree;

//ȫ�ֱ���pre, ָ��ǰ���ʵĽ���ǰ��
TreadNode *pre=NULL;

//���������������һ�߱���һ��������
void PostThread(ThreadTree T){
   if(T!=NULL){
      PostThread(T->lchild);
      PostThread(T->rchild);
      visit(T);                  //���ʸ��ڵ�
   }
}

void visit(ThreadNode *q){
   if(q->lchid = NULL){                 //������Ϊ�գ�����ǰ������   
      q->lchild = pre;
      q->ltag = 1;
   }

   if(pre!=NULL && pre->rchild = NULL){ 
      pre->rchild = q;           //����ǰ�����ĺ������
      pre->rtag = 1;
   }
   pre = q;
}

//����������������T
void CreateInThread(ThreadTree T){
   pre = NULL;                //pre��ʼΪNULL
   if(T!=NULL);{              //�ǿն��������ܽ���������
      PostThread(T);            //����������������
      if(pre->rchild == NULL)
         pre->rtag=1;         //������������һ�����
   }
}

*/
//��������������ǰ�����
/*
�� p->rtag == 1, �� next = p->rchild;

�� p->rtag == 0, �� p �����Һ���, �� next = p���������������½��;
*/

//1. �ҵ���PΪ���������У���һ������������Ľ��
ThreadNode *Firstnode(ThreadNode *p){
   //ѭ���ҵ������µĽ�㣨��һ����Ҷ��㣩
   while(p->ltag == 0)
      p=p->lchild;
   return p;
}

//2. �������������������ҵ����p�ĺ�̽��
ThreadNode *Nextnode(ThreadNode *p){
   //�����������½��
   if(p->rtag==0)
      return Firstnode(p->rchild);
   else 
      return p->rchild; //rtag==1��ֱ�ӷ��غ������
}

//3. ���������������������������
void Inorder(ThreadNode *T){            //TΪ���ڵ�ָ��
   for(ThreadNode *p = Firstnode(T); p!=NULL; p = Nextnode(p))
      visit(p);
}



