#include<iostream>
using namespace std;

 void func2(){
    int *ptr = new int;
      *ptr  = 5;
      cout<<*ptr;
      delete ptr;
 }
void func1(){
     int size;
    cin>>size;
    int *ptr = new int[size];

    int x = 1;
    for(int i =0; i<size; i++)
    {
        ptr[i] = x;
        cout<<ptr[i]<<endl;
        x++;
    }
    delete []  ptr;
}
int main()
{
//    func1();
    func2();
   return 0;
}