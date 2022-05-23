//直接插入排序
//不带“哨兵”
void InsertSort(int A[], int n){    //A中共n个数据元素
    int i,j,temp;
    for(i=1; i<n; i++)
        if(A[i]<A[i-1]){    //A[i]关键字小于前驱
            temp = A[i];  
            for(j=i-1; j>=0 && A[j]>temp; --j)
                A[j-1] = A[j];     //所有大于temp的元素都向后挪
            A[j+1] = temp;         //复制到插入位置
        }
}

//带哨兵，不用每次循环都判断j>=0
void InsertSort(int A[], int n){    //A中从1开始存储，0放哨兵
    int i,j;
    for(i=1; i<n; i++)
        if(A[i]<A[i-1]){    
            A[0] = A[i];     //复制为哨兵
            for(j=i-1; A[0] < A[j]; --j)  //从后往前查找待插入位置
                A[j+1] = A[j];     //向后挪动
            A[j+1] = A[0];          //复制到插入位置
        }
}

//折半插入排序

void InsertSort(int A[], int n){ 
    int i,j,low,high,mid;
    for(i=2;i<=n;i++){
        A[0] = A[i];                    //将A[i]暂存到A[0]
        low = 1; high = i-1;            //折半查找的范围

        while(low<=high){               //折半查找
            mid = (low + high)/2;       //取中间点
            if(A[mid]>A[0])             //查找左半子表
                high = mid - 1;
            else                        //查找右半子表
                low = mid + 1;
        }
        
        for(j=i-1; j>high+1;--j)       //统一后移元素，空出插入位置
            A[j+1] = A[j];
        A[high+1] = A[0]
    }
}

//希尔排序
void ShellSort(ElemType A[], int n){
    //A[0]为暂存单元
    for(dk=n/2; dk>=1; dk=dk/2)   //步长递减（看题目要求，一般是1/2
        for(i=dk+1; i<=n; ++i)
            if(A[i]<A[i-dk]){
                A[0]=A[i];
                for(j=i-dk; j>0&&A[0]<A[j];j-=dk)
                    A[j+dk]=A[j];         //记录后移，查找插入的位置
                A[j+dk]=A[0;]             //插入
            }
}

//交换排序

//冒泡排序

//交换
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//冒泡排序
void BubbleSort(int A[], int n){   //从0开始存放
    for(int i=0; i<n-1; i++){
        bool flag = false; // 表示本趟冒泡是否发生交换的标志
        for(int j=n-1; j>i; j--) //一趟冒泡过程
            if(A[j-1]>A[j]){      //若为逆序
                swap(A[j-1],A[j]);  //交换
                flag=true;
            }
        if(flag==false)
            return;       //本趟遍历后没有发生交换，说明表已经有序，可以结束算法
    }
}


//快速排序

//用第一个元素将待排序序列划分为左右两个部分
int Partition(int A[], int low, int high){
    int pivot = A[low];          //用第一个元素作为枢轴
    while(low<high){
        while(low<high && A[high]>=pivot) --high; //high所指元素大于枢轴，high左移
        A[low] = A[high];   //high所指元素小于枢轴，移动到左侧

        while(low<high && A[low]<=pivot)  ++low; //low所指元素小于枢轴，low右移
        A[high] = A[low];   //low所指元素大于枢轴，移动到右侧
    }
    A[low] = pivot   //枢轴元素存放到最终位置
    return low；     //返回存放枢轴的最终位置
} 

//快速排序
void QuickSort(int A[], int low, int high){
    if(low<high)   //递归跳出条件
        int pivotpos = Partition(A, low, high);   //划分
        QuickSort（A, low, pivotpos - 1);    //划分左子表
        QuickSort（A, pivotpos + 1, high);   //划分右子表
}

//简单选择排序
//交换
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectSort(int A[], int n){       //A从0开始
    for(int i=0; i<n-1; i++){          //一共进行n-1趟，i指向待排序序列中第一个元素
        int min = i;                   //记录最小元素位置
        for(int j=i+1; j<n; j++)       //在A[i...n-1]中选择最小的元素
            if(A[j]<A[min]) min = j;   //更新最小元素位置
        if(min!=i)                     
            swao(A[i],A[min]);         //交换
    }
}



//堆排序


//对初始序列建立大根堆
void BuildMaxHeap(int A[], int len){
    for(int i=len/2; i>0; i--)   //从后往前调整所有非终端结点
        HeadAdjust(A, i, len);
}

/*将以k为根的子树调整为大根堆
从最底层的分支结点开始调整*/
void HeadAdjust(int A[], int k, int len){
    A[0] = A[k];                      //A[0]暂存子树的根结点
    for(int i=2*k; i<=len; i*=2){     //沿key较大的子结点向下筛选
                                      // i为当前所选根结点的左孩子
                                      //i*=2是为了判断调整后再下一层是否满足大根堆
        if(i<len && A[i]<A[i+1])      //判断：当前所选根结点的左、右结点哪个更大
            i++;                      //取key较大的子结点的下标
        if(A[0] >= A[i]) 
            break;                    //筛选结束：i指向更大的子结点
        else{
            A[k] = A[i];              //将A[i]调整至双亲结点上
            k=i;                      //修改k值，以便继续向下筛选
        }
    }
    A[k] = A[0]                       //被筛选的结点的值放入最终位置
}

//交换
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//基于大根堆进行排序
void HeapSort(int A[], int len){
    BuildMaxHeap(A, len);          //初始建堆
    for(int i=len; i>1; i--){      //n-1趟的交换和建堆过程
        swap(A[i], A[1]);          //堆顶元素和堆底元素交换
        HeadAdjust(A,1,i-1);       //把剩余的待排序元素整理成堆
    }
}


//归并排序
//创建辅助数组B
int *B=(int *)malloc(n*sizeof(int));

//A[low,...,mid],A[mid+1,...,high] 各自有序，将这两个部分归并
void Merge(int A[], int low, int mid, int high){
    int i,j,k;
    for(k=low; k<=high; k++)
        B[k] = A[k];           //将A中所有元素复制到B中
    for(i=low, j=mid+1, k=i; i<=mid && j<= high; k++){
        if(B[i]<=B[j])          //为保证稳定性两个元素相等时，优先使用靠前的那个
            A[k]=B[i++];        //将较小值复制到A中
        else
            A[k]=B[j++];
    }//for
     
    //没有归并完的部分复制到尾部，while只会执行一个 
    while(i<=mid)  A[k++]=B[i++];     //若第一个表未检测完，复制
    while(j<=high) A[k++]=B[j++];     //若第二个表未检测完，复制
}

//递归操作
void MergeSort(int A[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;    //从中间划分
        MergeSort(A, low, mid);    //对左半部分归并排序
        MergeSort(A, mid+1, high); //对右半部分归并排序
        Merge(A,low,mid,high);     //归并
    }if
}


