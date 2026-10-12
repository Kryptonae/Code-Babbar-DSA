#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMaximum(vector<int> &arr)
{
    vector<int> arrCopy = arr;
    int size = arrCopy.size();
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arrCopy[i]);
    }

    return maxi;
}

int main()
{

    return 0;
}