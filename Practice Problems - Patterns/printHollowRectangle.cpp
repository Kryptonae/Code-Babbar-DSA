#include <iostream>
using namespace std;

void printHollowRectangle(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (m == 1)
        {
            cout << "* ";
        }

        else if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";

            for (int j = 0; j < m - 2; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    int m;

    cin >> n;
    cin >> m;

    printHollowRectangle(n, m);

    return 0;
}