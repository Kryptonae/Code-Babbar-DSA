#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int digit;
    int ans = 0;

    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
    }

    return ans;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << reverseNumber(num);

    return 0;
}