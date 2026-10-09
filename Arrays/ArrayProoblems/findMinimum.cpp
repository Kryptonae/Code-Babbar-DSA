#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMinimum(vector<int> &arr)
{
    int size = arr.size();
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{

    return 0;
}