#include <iostream>
using namespace std;

void printHollowRightAngleTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "* ";
        }

        else if (i <= n - 2)
        {
            cout << "* ";

            for (int j = 0; j < i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }

        else
        {
            for (int j = 0; j < n; j++)
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

    printHollowRightAngleTriangle(n);

    return 0;
}