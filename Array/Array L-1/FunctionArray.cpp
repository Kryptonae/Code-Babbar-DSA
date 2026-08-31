#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    // Print Array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;

    // Print Array * 2

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] * 2 << ", ";
    }

    cout << endl;

    // Print Array Odd Even

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "Even" << ", ";
        }
        else
        {
            cout << "Odd" << ", ";
        }
    }

    cout << endl;

    // Count 0  and 1

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
    }

    cout << "0's Count: " << count0 << " " << endl;
    cout << "1's Count: " << count1 << " " << endl;
}

int main()
{
    int arr[10] = {1, 0, 0, 1, 1};
    int size = 5;
    int capacity = 10;

    printArray(arr, size);

    return 0;
}