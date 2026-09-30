// Reverse a Number

#include <iostream>
using namespace std;

int reverseANumber(int num)
{
    int ans = 0;

    while (num != 0)
    {
        int digit;
        digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }

    return ans;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "Reverse No: " << reverseANumber(num);

    return 0;
}