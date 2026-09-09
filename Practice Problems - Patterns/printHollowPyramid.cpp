#include <iostream>
using namespace std;

void printHollowPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }

        else if (i <= n - 2)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }
        else
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    printHollowPyramid(n);

    return 0;
}