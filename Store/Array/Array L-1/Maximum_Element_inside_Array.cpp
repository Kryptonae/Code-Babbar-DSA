// Find Maximum Element inside a Array

#include <iostream>
#include <algorithm>
using namespace std;

int maxElement(int arr[], int size) {

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    
    return maxi;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << maxElement(arr, size);

    return 0;
}