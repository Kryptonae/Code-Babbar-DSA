#include <iostream>
using namespace std;

void printHollowDiamond(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }
    }
}

int main()
{
    int n;

    cin >> n;

    return 0;
}