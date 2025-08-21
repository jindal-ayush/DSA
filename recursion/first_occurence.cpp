#include<iostream>
#include<vector>
using namespace std;

 int first_occurence(vector<int> arr , int i , int target){
      if(i==arr.size())
      {
        return -1;
      }
 
      if(arr[i] == target)
       {
          return i;
       }
      return  first_occurence(arr,i+1 , target);
       
 }
 int lastOccur(vector<int>arr , int target , int i){
    if(i==arr.size())
    {
        return -1;
    }
    int idxFound = lastOccur(arr,target, i+1);
    if(idxFound == -1 && arr[i]==target)
    {
      return i;
    }
    return idxFound;
 }

int main()
{
    vector<int>arr ={1,2,3,3,3,4,5};
    int  target = 3;
    cout<<first_occurence(arr , 0, 3)<<endl;
    cout<<lastOccur(arr, 3, 0);
    return 0;

}