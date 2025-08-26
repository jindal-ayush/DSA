#include <iostream>
#include <climits>
using namespace std;

// int main()
// {
//     int maxSum = INT_MIN;
//     int arr[] = {2,-3, 6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);

//     for(int i =0; i<n; i++)
//     {
//         for(int j =i; j<n; j++)
//         {
//             int currSum= 0;

//             for(int k =i; k<=j; k++)
//             {
//                   currSum += arr[k];
//             }
//             cout<<currSum<<",";
//             maxSum = max(currSum , maxSum);
//         }
//         cout<<endl;
//     }
//     cout<<"maximum subarray sum = "<<maxSum<<endl;
//     return 0;
// }

//******************** time complexity O(n square)****************************************** */
// int main()
// {
//     int maxSum = INT_MIN;
//     int arr[] = {2,-3, 6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);

//     for(int i =0; i<n; i++)
//     {
//         int currSum= 0;
//         for(int j =i; j<n; j++)
//         {
//            currSum += arr[j];
//             maxSum = max(currSum , maxSum);
//         }
//     }
//     cout<<"maximum subarray sum = "<<maxSum<<endl;
//     return 0;
// }

//************************Kadanes algorithm ****************************** */
int main()
{
  int maxSum = INT_MIN;
  int arr[] = {-2, -3, -6, -5, -4, -2};
  int n = sizeof(arr) / sizeof(int);
  int currSum = 0;
  for (int i = 0; i < n; i++)
  {
    currSum += arr[i];
    maxSum = max(currSum, maxSum);
    if (currSum < 0)
    {
      currSum = 0;
    }
  }
  cout << "maximum subarray sum = " << maxSum << endl;
  return 0;
}
