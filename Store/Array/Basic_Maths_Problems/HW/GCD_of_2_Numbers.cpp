// GCD of 2 Numbers

#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{
    int a;
    int b;

    cout << "Enter Number 1: ";
    cin >> a;

    cout << "Enter Number 2: ";
    cin >> b;

    cout << findGCD(a, b);

    return 0;
}