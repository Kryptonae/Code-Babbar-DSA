// Sum of Digits

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << sumOfDigits(num);

    return 0;
}