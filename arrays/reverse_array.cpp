#include<iostream>
using namespace std;

// int main()
// {
//     int arr[]= {5,4,3,9,2};
//      int  n = sizeof(arr)/sizeof(int);
//      int copyArr[n];
//      for(int i =0; i<n; i++)  
//      {
//           int j = n-i-1;
//             copyArr[i] = arr[j];
//      }
//      for(int i =0; i<n; i++)
//      {
//         arr[i] = copyArr[i];
//      }
//      for (int i = 0; i < n; i++) {
//         cout << copyArr[i] << " ";
//     }
// }




void printArr (int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]= {5,4,3,9,2};
   int  n = sizeof(arr)/sizeof(int);

   int start = 0;
   int end = n-1;

  while(start<end)
  {
    
//    int temp =  arr[start];   
//      arr[start] =  arr[end];  
//      arr[end] = temp;

    swap(arr[start] , arr[end]);
     start++;\
     end--;

  }
  printArr(arr,n);
}













