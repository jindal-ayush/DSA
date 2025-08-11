#include<iostream>
#include<string>
using namespace std;

void checkLowercaseVowels(string str)
{
    int vowels = 0;
     for(int i =0; i<str.length(); i++)
   {
       if(str[i]=='a'|| str[i]=='i'|| str[i]=='e'|| str[i]=='o'|| str[i]=='u')
       {
        vowels++;
       }
   }
   cout<<vowels;
}
int main()
{
    string str = "ayush jindal";
    checkLowercaseVowels(str);
}