#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> &arr)
{
    // Implement logic to reverse the array
    vector<int> num = arr;
    int size = num.size();

    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        swap(num[i], num[j]);

        i++;
        j--;
    }

    return num;
}

int main()
{

    return 0;
}