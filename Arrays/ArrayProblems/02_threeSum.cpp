#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int size = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < size; i++)
    {

        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}