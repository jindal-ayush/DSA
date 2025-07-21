// #include<iostream>
// using namespace std;

// int main()
// {
//         int marks[5];   
//         int size = sizeof(marks)/sizeof(int);  

//    for(int i =0; i<size; i++)
//    {
//       cin>>marks[i];
//    }

//    for(int i =0; i<size; i++)
//    {
//        cout<<marks[i]<<endl;
//    }
// }


#include<iostream>
using namespace std;

void printArr(int arr[] , int n)
{
     for(int i =0; i<n; i++)
     {
        cout<<arr[i]<<endl;
     }
}
int main()
{
  int arr[]= {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int);
  printArr(arr,n);
}