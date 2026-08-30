// Reverse a Integer

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

long long int reverseAInteger(int num)
{

    long long int ans = 0;
    int digit;
    bool flag;

    if (num == 0)
    {
        return 0;
    }

    else
    {

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

        if (ans > INT_MAX)
        {
            return 0;
        }

        if (ans < INT_MIN)
        {
            return 0;
        }
        }

    return ans;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "Reverse Integer: " << reverseAInteger(num);

    return 0;
}