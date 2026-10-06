#include <iostream>
#include <cmath>
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

int findLCM(int a, int b)
{
    int lcm = 0;

    lcm = (a * b) / findGCD(a, b); // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)

    return lcm;
}

int main()
{
    int a;
    int b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The LCM of " << a << " and " << b << " is: " << findLCM(a, b) << endl;

    return 0;
}