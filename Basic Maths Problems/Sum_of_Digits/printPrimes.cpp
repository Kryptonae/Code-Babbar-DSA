#include <iostream>
#include <vector>
using namespace std;

bool isPrimes(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool isPrime = isPrimes(i);

        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}