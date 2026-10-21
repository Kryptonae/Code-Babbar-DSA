#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMode(vector<int> &nums)
{
    // Implement logic to find mode
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int maxFrequent = 1;
    int count = 1;
    int mode = nums[0];

    for (int i = 1; i < size; i++)
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

int findLeastMode(vector<int> &nums)
{
    int size = nums.size();
    int minFrequency = INT_MAX;
    int count = 1;
    int lf = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            if (count < minFrequency)
            {
                minFrequency = count;
                lf = nums[i - 1];
            }

            count = 1;
        }
    }

    if (count < minFrequency)
    {
        minFrequency = count;
        lf = nums[size - 1];
    }

    count = 1;

    return lf;
}

pair<int, int> highestAndLowestFrequency(vector<int> &arr)
{
    int hf = findMode(arr);
    int lf = findLeastMode(arr);

    return {hf, lf};
}

int main()
{

    return 0;
}