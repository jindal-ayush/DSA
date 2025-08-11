#include <iostream>
#include <string>
using namespace std;

// bool isAnagram(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         cout << "anagram is not valid" << endl;
//         return false;
//     }
//     int count[26] = {0};
//     for (int i = 0; i < str1.length(); i++)
//     {
//         int idx = str1[i] - 'a';  //   99 -97  = 2
//         count[idx]++;
//     }
//     for (int i = 0; i < str2.length(); i++)
//     {
//         int idx = str2[i] - 'a';  //   
//         if (count[idx] == 0)
//         {
//             cout << "anagram is not valid" << endl;
//             return false;
//         }
//         count[idx]--;
//     }
//      cout<<"anagram is valid"<<endl;
//     return true;
// }


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


