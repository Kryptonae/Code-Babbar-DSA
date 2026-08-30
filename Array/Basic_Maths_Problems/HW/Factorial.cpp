// Find Factorial of a Number

#include <iostream>
using namespace std;

long long int Factorial(int num)
{
    long long int sum = 1;

    if (num < 0)
    {
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        sum *= num - i;
    }

    return sum;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << Factorial(num);

    return 0;
}