#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool swap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[] = {1, 3, 12, 9, 7, 4, 8};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    return 0;
}