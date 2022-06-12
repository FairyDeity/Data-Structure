
//快排

//void quick_sort(int*&a, int p, int r)
//{
//    if(p < r)
//    {
//        int q = partition(a, p, r);
//        quick_sort(a, p, q -1);
//        quick_sort(a, q +1, r);
//    }
//}
//int partition(int*&a, int p, int r)
//{
//    int j = p;
//    for(int i = p; i < r; i++)
//    {
//        if(a[i] >= a[r])
//        {
//            if(i != j)
//            {
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//            j++;
//        }
//    }
//    int ex = a[j];
//    a[j] = a[r];
//    a[r] = ex;
//    
//    return j;
//}


//找第k小的数
//#include <iostream>
//#include <time.h>
//using namespace std;
////随机化分割
//int randomized_partition(int* a, int p, int r);
//int randomized_select(int* a, int p, int r, int i);
//int main()
//{
//    int arr[10] = {4, 34, 21, 8, 3, 10, 453, 32, 1, 400};
//    int n;
//    while(true)
//    {
//        cout<<"输入第n小的数："<<endl;
//        cin>>n;
//        cout<<randomized_select(arr, 0, 9, n - 1)<<endl;
//    }
//    return 0;
//}
////下标为[p, r]之间的元素
//int randomized_partition(int* a, int p, int r)
//{
//    srand(time(NULL));
//    int q = rand()%(r - p + 1) + p;
//    int temp = a[q];
//    a[q] = a[r];
//    a[r] = temp;
//    int j = p;
//    for(int i = p; i < r; i++)
//    {
//        if(a[i] < a[r])
//        {
//            if(i != j)
//            {
//                int temp2 = a[i];
//                a[i] = a[j];
//                a[j] = temp2;
//            }
//            j++;
//        }
//    }
//     
//    temp = a[j];
//    a[j] = a[r];
//    a[r] = temp;
//    return j;
//}
//
//int randomized_select(int* a, int p, int r, int i)
//{
//    int q = randomized_partition(a, p, r);
//    while(p != r)
//    {
//        if(i == q)
//            return a[q];
//        else if(i < q)
//        {
//            r = q - 1;
//            q = randomized_partition(a, p, r);
//        }
//        else
//        {
//            p = q + 1;
//            q = randomized_partition(a, p, r);
//        }
//    }
//    return a[p];
//}


//树的表示

//typedef struct CTNode { // 孩子结点
//  int child;
//  struct CTNode *next;
//} *ChildPtr;
//typedef struct {
//  ElemType data； // 结点的数据元素
//  ChildPtr firstchild； // 孩子链表头指针
//} CTBox;
//typedef struct {
//  CTBox nodes[MAX_TREE_SIZE]；
//  int n, r； // 结点数和根结点的位置
//} CTree;


//找二叉搜索树中的第k大的结点、
//#include <stdlib.h>
//#include <stdio.h>
//#include <assert.h>
//
//struct Node {
//    int val;
//    struct Node *left;
//    struct Node *right;
//};
//typedef struct Node node_t;
//
///* Core function 
// * Inorder, from right first.
// */
//void find_by_inorder(node_t *root, int *count, node_t **result, int k)
//{
//    if (root != NULL) {
//        find_by_inorder(root->right, count, result, k);
//        (*count)++;
//        if (*count == k) {
//            *result = root;
//
//return;
//
//}　　　
//        find_by_inorder(root->left, count, result, k);
//    }
//}
//
//node_t *make_node(int n) {
//    node_t *node = malloc(sizeof(node_t));
//    node->left = NULL;
//    node->right = NULL;
//    node->val = n;
//    return node;
//}
//
//int main(int argc, char **argv) {
//    node_t *node;
//    node_t *t1 = make_node(1);
//    node_t *t2 = make_node(2);
//    node_t *t3 = make_node(3);
//    node_t *t4 = make_node(4);
//    node_t *t5 = make_node(5);
//    node_t *t6 = make_node(6);
//    t2->left = t1;
//    t2->right = t3;
//    t4->left = t2;
//    t4->right = t5;
//    t5->right = t6;
//    node_t *result = NULL;
//    int count = 0;
//    int i;
//    /* Test */
//    for (i = 0; i < 10; i++) {
//        find_by_inorder(t4, &count, &result, i);
//        if (result != NULL)
//            printf("%dth: %d\n", i, result->val);
//        result = NULL;
//        count = 0;
//    }
//    return 0;
//}