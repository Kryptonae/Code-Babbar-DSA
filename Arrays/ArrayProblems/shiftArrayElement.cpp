#include <iostream>
#include <vector>
using namespace std;

vector<int> shiftRight(vector<int> &arr)
{
    vector<int> nums = arr;
    int size = nums.size();
    int last = nums[size - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            nums[i] = nums[i - 1];
        }
        else if (i == 0)
        {
            nums[i] = last;
        }
    }

    return nums;
}

int main()
{

    return 0;
}