#include <iostream>
#include <vector>
using namespace std;

int findFirstUnsortedIndex(const vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
        else
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    return 0;
}