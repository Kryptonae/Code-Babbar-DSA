// Smallest Digit

#include <iostream>
#include <limits.h>
using namespace std;

int smallestDigit(int num)
{
    int smallest;
    int digit;

    smallest = INT_MAX;

    while (num != 0)
    {
        digit = num % 10;

        /* if (digit < smallest)
        {
            smallest = digit;
        } */

        smallest = min(smallest, digit);

        num /= 10;
    }

    return smallest;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << smallestDigit(num);

    return 0;
}