// Hollow Rectangle Pattern

#include <iostream>
using namespace std;

void hollowRectangle(int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
        else
        {
            cout << "* ";

            for (int j = 0; j < column - 2; j++)
            {
                cout << "  ";
            }

            cout << "* ";

            cout << endl;
        }
    }
}

int main()
{
    int row;
    int column;

    cout << "Enter 1 number: ";
    cin >> row;

    cout << "Enter 2 number: ";
    cin >> column;

    hollowRectangle(row, column);

    return 0;
}