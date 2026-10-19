#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int k)
{
    int size = arr.size();
    k = k % size;
    vector<int> temp;

    for (int i = size - k; i < size; i++)
    {
        int value = arr[i];
        temp.push_back(value);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (i - k >= 0)
        {
            arr[i] = arr[i - k];
        }
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    return 0;
}