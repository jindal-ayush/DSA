#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.length() != word2.length()) {
        return false;
    }
    int freq1[26] ={0};
    int freq2[26] = {0};
     int present1[26] = {0};
    int present2[26] = {0};
    
    for(int ch : word1){
        int index = ch - 'a';
        freq1[index]++;
        present1[index] = 1;
    }
    for(int ch: word2)
    {
        int index = ch -'a';
        freq2[index]++;
        present2[index] = 1;
    }
     for(int i = 0; i<26; i++)
     {
         if(present1[i] != present2[i])
         {
             return false;
         }
     }
     sort(freq1, freq1+26);
     sort(freq2, freq2+26);
     for(int i =0; i<26; i++)
     {
         if(freq1[i] != freq2[i])
         {
             return false;
         }
     }
     
    
    return true; 
}

int main() {
    string word1 = "aabbcc";
    string word2 = "ccddee";
    
     cout<<closeStrings(word1 , word2);
    return 0;   
}
