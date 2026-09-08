#include <iostream>
using namespace std;

void printEvenNumbers(int n)
{
    // Implement the loop logic to print even numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;

    cin >> n;

    printEvenNumbers(n);

    return 0;
}