#include <iostream>
using namespace std;

void printHollowDiamond(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i == 0) // top point
        {
            for (int j = 0; j < n - 1; j++)
                cout << "  ";
            cout << "* " << endl;
        }
        else if (i < n - 1) // upper half, widening
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << "  ";
            cout << "* ";
            for (int j = 0; j < 2 * i - 1; j++)
                cout << "  ";
            cout << "* " << endl;
        }
        else if (i == n - 1) // middle row, widest
        {
            cout << "* ";
            for (int j = 0; j < 2 * n - 3; j++)
                cout << "  ";
            cout << "* " << endl; // <-- yeh endl missing tha
        }
        else if (i < 2 * n - 2) // lower half, narrowing
        {
            for (int j = 0; j < i - n + 1; j++)
                cout << "  ";
            cout << "* ";
            for (int j = 0; j < 2 * (2 * n - i - 2) - 1; j++)
                cout << "  ";
            cout << "* " << endl;
        }
        else // bottom point <-- yeh naya case add kiya
        {
            for (int j = 0; j < n - 1; j++)
                cout << "  ";
            cout << "* " << endl;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    printHollowDiamond(n);

    return 0;
}