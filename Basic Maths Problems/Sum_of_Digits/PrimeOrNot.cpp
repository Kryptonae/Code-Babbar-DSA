#include <iostream>
using namespace std;

string isPrime(int num)
{
    // your code goes here

    if (num <= 1)
    {
        return "No";
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return "Not Prime";
        }
    }

    return "Prime";
}

int main()
{
    int n;

    cin >> n;

    cout << isPrime(n);

    return 0;
}