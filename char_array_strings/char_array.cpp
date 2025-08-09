#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    // char work[50] = {'c','o', 'd','e' ,'\0'};
    // cout<<strlen(work)<<endl;

      // char word[30];
    // cin>>word;
    // cout<<"your word was = "<<word<<endl;
    // cout<<strlen(word)<<endl;
    
     char sentence  [30];
     cin.getline(sentence , 30 , '*');
    cout<<"your word was = "<<sentence<<endl;
    cout<<strlen(sentence)<<endl;
}