#include <iostream>
using namespace std;

string palindromeNumber(int num)
{
    int digit;
    int orgNum = num;
    int ans = 0;

    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
    }

    if (orgNum == ans)
    {
        return "is a Palindrome Number.";
    }
    else
    {
        return "is not a Palindrome Number.";
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