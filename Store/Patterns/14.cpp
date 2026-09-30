// Hollow Diamond Pattern

#include <iostream>
using namespace std;

void hollowDiamondPattern(int num)
{
    for (int i = 0; i < 2 * num - 1; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            cout << "*";

            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
        else if (i < num)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            cout << "*";

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            cout << "*";

            for (int j = 0; j < num - i - 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
        else if (i < 2 * num - 2)
        {
            for (int j = 0; j < i - num + 1; j++)
            {
                cout << "  ";
            }
            
            cout << "*";

            for (int j = 0; j < 2 * (2 * num - i - 1) - 1; j++)
            {
                cout << "  ";
            }

            cout << "*";

            for (int j = 0; j < i - num + 1; j++)
            {
                cout << "  ";
            }

            cout << endl;
        }
        else 
        {
            for (int j = 0; j < num - 1; j++)
            {
                cout << "  ";
            }

            cout << "*";

            for (int j = 0; j < num - 1; j++)
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

    hollowDiamondPattern(num);

    return 0;
}