#include <iostream>
#include <string>
using namespace std;

void isAnagram(string str1 , string str2)
{
    int count[26] = {0};
    for(int i =0; i<str1.length(); i++)
    {
       int index = srt1[i] - 'a';
       count[index]++;
    }
    for(int i =0; i<str2.lenth(); i++)
    {
        int index = str2[i]- 'a';
        if(count[index]==0){
            cout<<"anagram is not valid"
        }
    }
 }
int main()
{
    string str1 = "anagrama";
    string str2 = "nagaram";
    isAnagram(str1, str2);
}

