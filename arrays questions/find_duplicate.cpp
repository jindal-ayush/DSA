#include<iostream>
#include<algorithm>
using namespace std;
 
void find_duplicate(int arr[], int n){
    int res[10];
    int k =0;
     sort(arr, arr+n);
    for(int i =0; i<n-1; i++){
       
        if(arr[i]== arr[i+1])
        {
           res[k] = arr[i];
           k++;
        }
    }
    for(int i =0; i<k; i++)
    {
       cout<<res[i]<<",";
    }
}

int main()
{

    int arr[] ={1,1,1,2,3,6,3,6,1};
    int n = sizeof(arr)/sizeof(int);
    find_duplicate(arr , n);

}