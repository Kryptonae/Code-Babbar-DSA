// Hour Glass Pattern

#include <iostream>
using namespace std;

void hourGlassPattern(int num)
{

    for (int i = 0; i < 2 * num - 1; i++)
    {
        /* if (i == 0 || i == 2 * num - 2)
        {
            for (int j = 0; j < 2 * num - i - 1; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
        else if (i < num)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * (num - i) - 1; j++)
            {
                cout << "* ";
            }

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
        else
        {
            for (int j = 0; j < 2 * num - i - 2; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < 2 * (i - num + 1) + 1; j++)
            {
                cout << "* ";
            }

            for (int j = 0; j < 2 * num - i - 2; j++)
            {
                cout << "  ";
            }

            cout << endl;
        } */
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    hourGlassPattern(num);

    return 0;
}