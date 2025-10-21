#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int count = 0;
    string str = "abcab";
    string str2  = "";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
                 string sub = str.substr(i, j-i+1);
                reverse(sub.begin(), sub.end());
                cout << sub << endl;    
            }
        }
    }
    cout<<count;
}