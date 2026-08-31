// Char Array

#include <iostream>
using namespace std;

void charArray(char arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a Character " << i + 1 <<  ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }
    
}

int main()
{
    char arr[10];
    int size = 10;

    charArray(arr, size);

    return 0;
}