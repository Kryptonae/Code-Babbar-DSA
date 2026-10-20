#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    vector<vector<int>> nums = mat;
    // int rowSize = nums.size();
    int n = nums.size();
    // int colSize = nums[0].size();
    int m = nums[0].size();
    int sum = 0;

    for (int row = 0; row < n; row++)
    {
        sum += nums[row][row];
    }

    for (int row = 0; row < n; row++)
    {
        sum += nums[row][n - row - 1];
    }

    if (n & 1)
    {
        sum = sum - nums[n / 2][n / 2];
        return sum;
    }
    else
    {
        return sum;
    }
}

int main()
{

    return 0;
}