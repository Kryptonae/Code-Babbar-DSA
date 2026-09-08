#include <iostream>
using namespace std;

string isPrime(int n)
{
    // your code goes here
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
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