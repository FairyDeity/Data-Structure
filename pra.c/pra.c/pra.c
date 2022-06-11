//合并排序
//void sort(int* &a, int p, int q, int r)
//{
//   int* left =new int[q - p +1];
//   int* right =new int[r - q];
//   for(int i =0; i < q - p +1; i++)
//     left[i] = a[p + i];
//   for(int i =0; i < r - q; i++)
//     right[i] = a[q + i +1];
//
//   int m =0;
//   int n =0;
//
//   for(int i = p; i <= r; i++) {
//     if(left[m] <= right[n]) {
//       a[i] = left[m];
//       if(m++== q-p) {
//         for(int j = i +1; j <= r; j++)
//           a[j] = right[n++];
//         break;
//       }
//     } else {
//       a[i] = right[n];
//       if(n++== r-q-1) {
//         for(int j = i +1; j <= r; j++)
//           a[j] = left[m++];
//         break;
//       }
//     }
//   }
//   
//   delete[] left;
//   delete[] right;
//}
//void merge(int* &a, int m, int n)
//{
//  if(m < n) {
//     int mid = (m + n)/2;
//     merge(a, m, mid);
//     merge(a, mid+1, n);
//     sort(a, m, mid, n);
//  }
//}


//堆排序
//static void max_heapify(int*&a, int i, int length)
// {
//     int largest = i;
//     while(largest <= length -1) {
//         int left =2*largest +1;
//         int right =2*largest +2;
//         int temp = largest;
//         if(left <= length -1&& a[left] > a[largest]) {
//             largest = left;
//         }
//         if(right <= length -1&& a[right] > a[largest]) {
//             largest = right;
//         }
//         if(largest != temp) {
//             int exchange = a[largest];
//             a[largest] = a[temp];
//             a[temp] = exchange;
//         } else {
//             break;
//         }
//     }
// }
// 
// void build_max_heap(int*&a, int length)
// {
//     int root = length/2-1;
//     for(int i = root; i >=0; i--)
//         max_heapify(a, i, length);
// }
// 
// void heap_sort(int*&a, int length)
// {
//     build_max_heap(a, length);
//     for(int i = length -1; i >=1; i--) {
//         int temp = a[0];
//         a[0] = a[i];
//         a[i] = temp;
//         max_heapify(a, 0, i);
//     }
// }
// 
// void heap_delete(int*&a, int i, int length)
// {
//     if(i != length -1) {
//         a[i] = a[length -1];
//         max_heapify(a, i, length); 
//     }
// }
// 
// void heap_insert(int*&a, int x, int length)
// {
//     int* temp = a;
//     a = new int[length +1];
//     for(int i =0; i < length; i++)
//         a[i] = temp[i];
//     delete temp;
//     //用-10000000代替负无穷
//     a[length] =-10000000;
//     increase_key(a, length, x);
// }
// 
// void increase_key(int*&a, int i, int key)
// {
//     if(a[i] > key) {
//         cout<<"key should be larger than a[i]"<<endl;
//     } else {
//         int parent = (i -1)/2;
//         a[i] = key;
//         while(parent >= 0 && a[parent] < key) {
//             int temp = a[parent];
//             a[parent] = key;
//             a[i] = temp;
//             i = parent;
//             parent = (i -1)/2;
//         }
//     }
// }