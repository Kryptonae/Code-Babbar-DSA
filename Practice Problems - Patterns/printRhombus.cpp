#include <iostream>
using namespace std;

void printRhombus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    printRhombus(n);

    return 0;
}