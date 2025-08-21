#include<iostream>
using namespace std;

class Car{
  public:
   string name;
   int *mileage;
   string color;


  Car(string name, string color)
  {
     this->name = name;
     this->color = color;
     mileage = new int;
     *mileage = 12;
  }
  Car(Car &original)
  {
    cout<<"copying original array"<<endl;
    name = original.name;
    color = original.color;
    mileage = new int;
    *mileage = *original.mileage;

  }
  ~Car(){
    cout<<"deleting object"<<endl;
    if(mileage != NULL){
      delete mileage;
      mileage = NULL;
    }
  }
   
};

int main(){
  Car c1("maruti 800", "white");
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
     cout<<c1.name<<endl;




    // *c2.mileage = 10;
    // cout<<*c1.mileage<<endl;
    
    // cout<<c1.name<<endl;
    // cout<<c2.name<<endl;


  return 0;
}