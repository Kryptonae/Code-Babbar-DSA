// Check for Negative Negative and Zero

#include <bits/stdc++.h>
using namespace std;

void signChecker(int num)
{
    if (num > 0)
    {
        cout << num << " is a Positive Number.";
    }
    else if (num == 0)
    {
        cout << num << " is Zero.";
    }
    else
    {
        cout << num << " is a Negative Number.";
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    signChecker(num);

    return 0;
}