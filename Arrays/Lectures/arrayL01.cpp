#include <iostream>
using namespace std;
/*
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 */

void printTwice(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << 2 * arr[i] << " ";
    }
}

void printEvenOrOdd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        int number = arr[i];

        if (number & 1)
        {
            cout << "Odd" << " ";
        }
        else
        {
            cout << "Even" << " ";
        }
    }
}

void countZeroAndOnes(int arr[], int size)
{
    int totalZeroes = 0;
    int totalOnes = 0;

    for (int i = 0; i < size; i++)
    {
        int number = arr[i];

        if (number == 1)
        {
            totalOnes++;
        }
        else if (number == 0)
        {
            totalZeroes++;
        }
    }

    cout << "Total Ones: " << totalOnes << endl;
    cout << "Total Zeroes: " << totalZeroes;
}

int main()
{
    // int arr[10];
    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr[5] = {1, 2};
    // int arr[5] = {0};
    // int arr[] = {5, 15, 25, 35, 45};

    // printArray(arr, 3);

    /* for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    } */

    /* int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } */

    /* int arr[5];
    int size;

    cout << "Enter the Size of the Array: ";
    cin >> size;

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } */

    // char arr[5];
    int arr[5] = {2, 4, 1, 1, 0};
    int size;
    /*
        cout << "Enter the Size of the Array: ";
        cin >> size;

        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter a Character " << i + 1 << ": ";
            cin >> arr[i];
        }

        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl; */

    // printTwice(arr, 5);
    // printEvenOrOdd(arr, 5);
    countZeroAndOnes(arr, 5);

    return 0;
}