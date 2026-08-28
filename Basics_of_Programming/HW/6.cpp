// Find Factorial of a Number

#include <bits/stdc++.h>
using namespace std;

long long factorial(long long num)
{
    long long result = 1;

    if (num < 0)
        {
            cout << "Factorial Can't be Negative." << endl;
            return 0;
        }

    for (long long i = 0; i < num; i++)
    {
        result *= num - i;
    }

    return result;
}

int main()
{
    long long num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "Factorial: " << factorial(num);

    return 0;
}