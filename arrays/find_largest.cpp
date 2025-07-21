#include<iostream>
using namespace std;

int main()
{
    int marks[]= {5,7,3,9,2};
    int largest =  marks[0];
    int n = sizeof(marks)/sizeof(int);
    for(int i =1; i<n; i++)
    {
       if(marks[i]>largest)  //
       {
           largest = marks[i];
       }
      
    }
     cout<<largest;
}