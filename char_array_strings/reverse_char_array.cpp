#include<iostream>
#include<string.h>
using namespace std;

void reverse(char word[], char n){
int st =0 , end  = n-1;
    while (st<=end)
    {
       swap(word[st++] ,word[end--]);
    }
}
int main()
{
    char word[] = "code";
    reverse(word , strlen(word));
    cout<<word;
      
}
