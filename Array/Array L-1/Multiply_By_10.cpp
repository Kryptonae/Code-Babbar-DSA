// Multiply Each Element By 10

#include <iostream>
using namespace std;

void multiplyByTen(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] * 10 << ", ";
    }
}

int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    int size = 5;

    multiplyByTen(num, size);

    return 0;
}