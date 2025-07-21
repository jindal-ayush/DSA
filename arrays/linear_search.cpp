#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            // cout << "value is found = " << key << endl;
            return arr[i];
        }
    }
    // cout << "key in not found";
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(int);
    // int key = 100;
       cout<<linearSearch(arr, n , 10)<<endl;
 
}
