#include <iostream>
#include <algorithm>
using namespace std;

long long int reverseAInteger(int num)
{
    int digit;
    long long int ans = 0;
    bool flag = 0;

    if (num == 0)
    {
        return 0;
    }

    if (num > 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    num = abs(num);

    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
    }

    ans = ans;

    if (flag == 0)
    {
        ans = 0 - ans;
    }

    if (ans > INT_MAX)
    {
        return 0;
    }

    if (ans < INT_MIN)
    {
        return 0;
    }

    return ans;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << reverseAInteger(num);

    return 0;
}