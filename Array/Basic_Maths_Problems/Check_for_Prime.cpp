// Check if a Number is Prime or Not

#include <iostream>
using namespace std;

string isPrime(int num)
{
    if (num <= 1)
    {
        return "Not a Prime";
    }

    for (int i = 2; i <= num - 1; i++)
    {

        if (num % i == 0)
        {
            return "Not a Prime";
        }
    }

    return "Prime";
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << isPrime(num);

    return 0;
}