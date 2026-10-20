#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> printExtremeElementsAlternately(vector<int> &arr)
{
    vector<int> ans;
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    sort(arr.begin(), arr.end());
    bool amIPickingSmallElement = true;

    while (start <= end)
    {
        if (amIPickingSmallElement)
        {
            ans.push_back(arr[start++]);
            amIPickingSmallElement = false;
        }
        else
        {
            ans.push_back(arr[end--]);
            amIPickingSmallElement = true;
        }
    }
    return ans;
}

int main()
{

    return 0;
}