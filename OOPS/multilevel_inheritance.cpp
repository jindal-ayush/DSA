#include<iostream>
using namespace std;

class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats"<<endl;
    }
    void Breathe()
    {
        cout<<"breathes"<<endl;
    }
};

class Mammal: public Animal{
    public:
    string bloodType = "warm";
    Mammal(){
        bloodType = "warm";
    }
};


class dog :  public Mammal{
   public:
   void tailWag()
   {
   cout<<"tailWag"<<endl;
   }
 
};
int main()
{
   dog d1;
   d1.eat();
   d1.Breathe();
   d1.tailWag();
   cout<<d1.bloodType;
   //cout<<d1.eat();



}

