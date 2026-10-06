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

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is: " << findGCD(a, b) << endl;

    return 0;
}