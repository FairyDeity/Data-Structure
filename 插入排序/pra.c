//ֱ�Ӳ�������
//�������ڱ���
void InsertSort(int A[], int n){    //A�й�n������Ԫ��
    int i,j,temp;
    for(i=1; i<n; i++)
        if(A[i]<A[i-1]){    //A[i]�ؼ���С��ǰ��
            temp = A[i];  
            for(j=i-1; j>=0 && A[j]>temp; --j)
                A[j-1] = A[j];     //���д���temp��Ԫ�ض����Ų
            A[j+1] = temp;         //���Ƶ�����λ��
        }
}

//���ڱ�������ÿ��ѭ�����ж�j>=0
void InsertSort(int A[], int n){    //A�д�1��ʼ�洢��0���ڱ�
    int i,j;
    for(i=1; i<n; i++)
        if(A[i]<A[i-1]){    
            A[0] = A[i];     //����Ϊ�ڱ�
            for(j=i-1; A[0] < A[j]; --j)  //�Ӻ���ǰ���Ҵ�����λ��
                A[j+1] = A[j];     //���Ų��
            A[j+1] = A[0];          //���Ƶ�����λ��
        }
}

//�۰��������

void InsertSort(int A[], int n){ 
    int i,j,low,high,mid;
    for(i=2;i<=n;i++){
        A[0] = A[i];                    //��A[i]�ݴ浽A[0]
        low = 1; high = i-1;            //�۰���ҵķ�Χ

        while(low<=high){               //�۰����
            mid = (low + high)/2;       //ȡ�м��
            if(A[mid]>A[0])             //��������ӱ�
                high = mid - 1;
            else                        //�����Ұ��ӱ�
                low = mid + 1;
        }
        
        for(j=i-1; j>high+1;--j)       //ͳһ����Ԫ�أ��ճ�����λ��
            A[j+1] = A[j];
        A[high+1] = A[0]
    }
}

//ϣ������
void ShellSort(ElemType A[], int n){
    //A[0]Ϊ�ݴ浥Ԫ
    for(dk=n/2; dk>=1; dk=dk/2)   //�����ݼ�������ĿҪ��һ����1/2
        for(i=dk+1; i<=n; ++i)
            if(A[i]<A[i-dk]){
                A[0]=A[i];
                for(j=i-dk; j>0&&A[0]<A[j];j-=dk)
                    A[j+dk]=A[j];         //��¼���ƣ����Ҳ����λ��
                A[j+dk]=A[0;]             //����
            }
}

//��������

//ð������

//����
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//ð������
void BubbleSort(int A[], int n){   //��0��ʼ���
    for(int i=0; i<n-1; i++){
        bool flag = false; // ��ʾ����ð���Ƿ��������ı�־
        for(int j=n-1; j>i; j--) //һ��ð�ݹ���
            if(A[j-1]>A[j]){      //��Ϊ����
                swap(A[j-1],A[j]);  //����
                flag=true;
            }
        if(flag==false)
            return;       //���˱�����û�з���������˵�����Ѿ����򣬿��Խ����㷨
    }
}


//��������

//�õ�һ��Ԫ�ؽ����������л���Ϊ������������
int Partition(int A[], int low, int high){
    int pivot = A[low];          //�õ�һ��Ԫ����Ϊ����
    while(low<high){
        while(low<high && A[high]>=pivot) --high; //high��ָԪ�ش������ᣬhigh����
        A[low] = A[high];   //high��ָԪ��С�����ᣬ�ƶ������

        while(low<high && A[low]<=pivot)  ++low; //low��ָԪ��С�����ᣬlow����
        A[high] = A[low];   //low��ָԪ�ش������ᣬ�ƶ����Ҳ�
    }
    A[low] = pivot   //����Ԫ�ش�ŵ�����λ��
    return low��     //���ش�����������λ��
} 

//��������
void QuickSort(int A[], int low, int high){
    if(low<high)   //�ݹ���������
        int pivotpos = Partition(A, low, high);   //����
        QuickSort��A, low, pivotpos - 1);    //�������ӱ�
        QuickSort��A, pivotpos + 1, high);   //�������ӱ�
}

//��ѡ������
//����
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectSort(int A[], int n){       //A��0��ʼ
    for(int i=0; i<n-1; i++){          //һ������n-1�ˣ�iָ������������е�һ��Ԫ��
        int min = i;                   //��¼��СԪ��λ��
        for(int j=i+1; j<n; j++)       //��A[i...n-1]��ѡ����С��Ԫ��
            if(A[j]<A[min]) min = j;   //������СԪ��λ��
        if(min!=i)                     
            swao(A[i],A[min]);         //����
    }
}



//������


//�Գ�ʼ���н��������
void BuildMaxHeap(int A[], int len){
    for(int i=len/2; i>0; i--)   //�Ӻ���ǰ�������з��ն˽��
        HeadAdjust(A, i, len);
}

/*����kΪ������������Ϊ�����
����ײ�ķ�֧��㿪ʼ����*/
void HeadAdjust(int A[], int k, int len){
    A[0] = A[k];                      //A[0]�ݴ������ĸ����
    for(int i=2*k; i<=len; i*=2){     //��key�ϴ���ӽ������ɸѡ
                                      // iΪ��ǰ��ѡ����������
                                      //i*=2��Ϊ���жϵ���������һ���Ƿ���������
        if(i<len && A[i]<A[i+1])      //�жϣ���ǰ��ѡ���������ҽ���ĸ�����
            i++;                      //ȡkey�ϴ���ӽ����±�
        if(A[0] >= A[i]) 
            break;                    //ɸѡ������iָ�������ӽ��
        else{
            A[k] = A[i];              //��A[i]������˫�׽����
            k=i;                      //�޸�kֵ���Ա��������ɸѡ
        }
    }
    A[k] = A[0]                       //��ɸѡ�Ľ���ֵ��������λ��
}

//����
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//���ڴ���ѽ�������
void HeapSort(int A[], int len){
    BuildMaxHeap(A, len);          //��ʼ����
    for(int i=len; i>1; i--){      //n-1�˵Ľ����ͽ��ѹ���
        swap(A[i], A[1]);          //�Ѷ�Ԫ�غͶѵ�Ԫ�ؽ���
        HeadAdjust(A,1,i-1);       //��ʣ��Ĵ�����Ԫ������ɶ�
    }
}


//�鲢����
//������������B
int *B=(int *)malloc(n*sizeof(int));

//A[low,...,mid],A[mid+1,...,high] �������򣬽����������ֹ鲢
void Merge(int A[], int low, int mid, int high){
    int i,j,k;
    for(k=low; k<=high; k++)
        B[k] = A[k];           //��A������Ԫ�ظ��Ƶ�B��
    for(i=low, j=mid+1, k=i; i<=mid && j<= high; k++){
        if(B[i]<=B[j])          //Ϊ��֤�ȶ�������Ԫ�����ʱ������ʹ�ÿ�ǰ���Ǹ�
            A[k]=B[i++];        //����Сֵ���Ƶ�A��
        else
            A[k]=B[j++];
    }//for
     
    //û�й鲢��Ĳ��ָ��Ƶ�β����whileֻ��ִ��һ�� 
    while(i<=mid)  A[k++]=B[i++];     //����һ����δ����꣬����
    while(j<=high) A[k++]=B[j++];     //���ڶ�����δ����꣬����
}

//�ݹ����
void MergeSort(int A[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;    //���м仮��
        MergeSort(A, low, mid);    //����벿�ֹ鲢����
        MergeSort(A, mid+1, high); //���Ұ벿�ֹ鲢����
        Merge(A,low,mid,high);     //�鲢
    }if
}


