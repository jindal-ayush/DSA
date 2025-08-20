#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
    for (auto triple : ans)
    {
        cout << "[ ";
        for (int num : triple)
        {
            cout << num << " ";
        }
        cout << "]\n";
    }
}