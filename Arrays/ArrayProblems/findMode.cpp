#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMode(const vector<int> &arr)
{
    // Implement logic to find mode
    vector<int> nums = arr;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int maxFrequent = 1;
    int count = 1;
    int mode = nums[0];

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxFrequent)
        {
            maxFrequent = count;
            mode = nums[i];
        }
    }
    return mode;
}

int main()
{

    return 0;
}