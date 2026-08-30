// Palindrome Number or Not

#include <iostream>
using namespace std;

long long int palindromeNumber(int num)
{
    long long int ans = 0;
    int digit;
    int saveNum = num;
    int flag;

    if (num < 0)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    num = abs(num);

    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }

    if (flag == 0)
    {
        ans = 0 - ans;
    }

    if (saveNum == ans)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << palindromeNumber(num);

    return 0;
}