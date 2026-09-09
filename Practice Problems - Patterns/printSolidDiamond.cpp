#include <iostream>
using namespace std;

void printSolidDiamond(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n - 1)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }

        else
        {
            for (int j = 0; j < i - n + 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * (2 * n - i - 1) - 1; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    printSolidDiamond(n);

    return 0;
}