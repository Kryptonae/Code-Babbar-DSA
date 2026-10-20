#include <iostream>
#include <vector>
using namespace std;

pair<long long, long long> sumPositiveNegative(const vector<int> &arr)
{
    int size = arr.size();
    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            positiveSum += arr[i];
        }
        else
        {
            negativeSum += arr[i];
        }
    }

    return {positiveSum, negativeSum};
}

int main()
{

    return 0;
}