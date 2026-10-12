#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> &nums)
{
    vector<int> num = nums;
    int size = num.size();
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ num[i];
    }
    return ans;
}

int main()
{

    return 0;
}