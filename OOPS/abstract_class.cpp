#include<iostream>
using namespace std;

class shape{
    public:
   virtual  void draw();
};
class Circle: public shape{
    public:
    void draw()
    {
        cout<<"draw circle\n";
    }
};
class Square: public shape{
    public:
    void draw()
    {
        cout<<"draw Square\n";
    }
};

int main()
{
  Circle c1;
  c1.draw();
  Square s1;
  s1.draw();
}