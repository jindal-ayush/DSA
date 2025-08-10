#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char ch[] , int n)
{
    int start = 0,  end = n-1;
        while(start<end)
    {
        if(ch[start]!=ch[end])
        {
            cout<<"not palinrome"<<endl;
            return false;
        }
            start++;
            end--;
             
    }
    cout<<"valid palindrome";
    return true;    
}
int main()
{
    char ch[] = "abda";
    palindrome(ch, strlen(ch));
}

