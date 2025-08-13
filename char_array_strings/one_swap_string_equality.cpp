#include<iostream>
#include<string.h>
using namespace std;

bool OneSwapString(string str1 , string str2)
{
    if(str1.length() != str2.length()){
        return false;
    }
    int diffChar1 , diffChar2;
    int count = 0;
    for(int i=0;i<str1.length(); i++)
    {
        if(str1[i] != str2[i])
        {
            if(count==0)
            {
                diffChar1 = str1[i];
                diffChar2  = str2[i];
               count++;
            }
          else if(count ==1)
          {
            if(diffChar1 != str2[i] && diffChar2 != str1[i])
            {
                cout<<str2[i]<<","<<str1[i];
                return false;
            }
            count++;
        }
            else{
                return false;
            }
          
        }
    }
  return (count==0|| count ==2);

}
int main()
{
  string str1  = "bank";
  string str2 = "kanb";
  cout<<OneSwapString(str1 , str2);

}
