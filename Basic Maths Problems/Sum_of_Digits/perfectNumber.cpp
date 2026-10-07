#include <iostream>
#include <vector>
using namespace std;

bool perfectNumber(int n)
{

    vector<int> v1;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            v1.push_back(i);
        }
    }

    int sum = 0;

    for (int x : v1)
    {
        sum += x;
    }

    return sum == n;

    /* int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }

    }

    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    } */
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    bool result = perfectNumber(n);
    if (result)
    {
        cout << n << " is a perfect number." << endl;
    }
    else
    {
        cout << n << " is not a perfect number." << endl;
    }

    return 0;
}