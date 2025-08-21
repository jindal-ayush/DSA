#include<iostream>
using namespace std;

int powe(int x , int n)
{
   if(n==0)
   {
    return 1;
   }
   int halfPower = powe(x , n/2);
   int halfPowerSquare = halfPower*halfPower;
   if(n%2 != 0)
   {
     return x*halfPowerSquare;
   }
   return halfPowerSquare;

}
// ************************ O(n)********************************
// int power(int num , int pow)
// {
//     if(pow==0)
//     {
//         return 1;
//     }
//    return num * power(num , pow-1);
// }
int main()
{
  int num =2;
  int pow = 10;
//  cout<<power(num , pow);
  cout<<powe(2 , 10);
}