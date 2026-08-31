#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Enter the size of Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
}

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr[10];
    // int arr[5] = {1, 2};
    // int arr[5] = {0};
    // int arr[5] = {1};
    // int arr[] = {1, 2, 3};
    // int arr[5] = {15, 22, 31, 66, 78};
    int size;
    int arr[5];

    printArray(arr, size);

    return 0;
}