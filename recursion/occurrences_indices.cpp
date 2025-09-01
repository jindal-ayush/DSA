#include<iostream>
using namespace std;

 int occurrence_indices(int arr[] , int n , int key ,int res[] , int k){
  if(n==0)
  {
    return k;
  }
  if(arr[n-1]==key)
  {
  res[k] = n-1;
  k++;
  }
      return occurrence_indices(arr,n-1 , key  , res , k);
       
 }
int main()
{
    int arr[] = {3,2,4,5,6,2,7,2,2,};
    int n= sizeof(arr)/sizeof(int);
    
    int res[100];

    int count = occurrence_indices(arr ,n , 2, res , 0);
    for(int i=count-1; i>=0; i--)
    {
        cout<<res[i]<<endl;
    }
}