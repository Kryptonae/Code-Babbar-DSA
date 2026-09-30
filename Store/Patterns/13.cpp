// Solid Diamond

#include <iostream>
using namespace std;

void solidDiamond(int num)
{
    for (int i = 0; i < 2 * num - 1; i++)
    {
        if (i < num - 1)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "* ";
            }

            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
        else
        {
            for (int j = 0; j < i - num + 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * (2 * num - i - 1) - 1; j++)
            {
                cout << "* ";
            }

            for (int j = 0; j < i - num + 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    solidDiamond(num);

    return 0;
}