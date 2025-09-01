#include<iostream>
using namespace std;

int binarySearch(int arr[] , int key , int n)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[n-1]== key)
    {
        return n-1;
    }
   return binarySearch(arr, key , n-1);
}
int main()
{
 int arr[] = {1,2,3,4,5,6,7};
 int n = sizeof(arr)/sizeof(int);
 cout<<binarySearch(arr , 5 , n);

}