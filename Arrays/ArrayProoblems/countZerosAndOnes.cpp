#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countZerosAndOnes(const vector<int> &nums)
{
    // Implement this method
    int size = nums.size();
    int countOnes = 0;
    int countZeroes = 0;

    for (int i = 0; i < size; i++)
    {

        if (nums[i] == 0)
        {
            countZeroes++;
        }
        if (nums[i] == 1)
        {
            countOnes++;
        }
    }

    return {countZeroes, countOnes};
}

int main()
{

    return 0;
}