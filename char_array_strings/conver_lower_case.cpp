#include<iostream>
#include<string.h>
using namespace std;

void toUpparCase(char word[] , int n )
{
   for(int i =0; i<n; i++)
   {
    char ch = word[i];
      if(word[i]>='a' && word[i]<='z')
      {
        continue;
      }
      else{
        word[i] = ch-'A'+'a';
      }
   }

};
int main()
{
    char word[] = "AppLe";
    toUpparCase(word , strlen(word));
    cout<<word<<endl;
}