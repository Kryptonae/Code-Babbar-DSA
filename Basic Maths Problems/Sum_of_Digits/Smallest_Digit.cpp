#include <iostream>
#include <algorithm>
using namespace std;

int smallestDigit(int num)
{
    int digit;
    int minNum = INT_MAX;

    while (num > 0)
    {
        digit = num % 10;
        minNum = min(minNum, digit);
        num = num / 10;
    }

    return minNum;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << smallestDigit(num);

    return 0;
}