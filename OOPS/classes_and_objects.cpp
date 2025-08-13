#include<iostream>
using namespace std;

class Student{
   string name;
   float cgpa;

   void getPercentage()
   {
    cout<<(cgpa*10);
   }
};

int main(){
  Student s1;
  cout<<sizeof(s1);
  return 0;
}