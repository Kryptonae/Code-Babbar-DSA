// Check if a number is Prime or Not

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is a Prime";
    }
    else
    {
        cout << num << " is not a Prime";
    }

    return 0;
}