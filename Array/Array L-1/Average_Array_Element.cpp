// Find Average of Array Element

#include <iostream>
using namespace std;

double averageArrayElement(int num[], double size)
{
    double sum = 0;
    int nums;
    double ans;

    for (int i = 0; i < size; i++)
    {
        nums = num[i];
        sum += nums;
    }

    ans = sum / size;

    return ans;
}

int main()
{
    int num[4] = {10, 20, 30, 40};
    double size = 4.0;

    cout << "Avg: " << averageArrayElement(num, size);

    return 0;
}