// Find Minimum Element inside a Array

#include <iostream>
#include <algorithm>
using namespace std;

int maxElement(int arr[], int size) {

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    
    return mini;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << maxElement(arr, size);

    return 0;
}