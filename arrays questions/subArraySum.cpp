#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int maxSum= INT_MIN;
    int n = sizeof(arr) / sizeof(int);
       for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // 0<4  , 1<4
        {
            int currSum = 0;
            for (int k = i; k <= j; k++) // 0<=0
            {
                // cout << arr[k];
                currSum += arr[k];
            }
            cout << currSum<<", ";
              maxSum =  max(maxSum , currSum);
        }
        cout << endl;
    }
       cout<<"max value = "<<maxSum;
};
