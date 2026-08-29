// Hollow Pyramid Pattern

#include <iostream>
using namespace std;

void hollowPyramidPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }

        if (i == 0)
        {
            cout << "* ";
        }
        else if (i == num - 1)
        {
            for (int j = 0; j < 2 * num - 1; j++)
            {
                cout << "* ";
            }
            
        }
        
        else
        {
            cout << "* ";

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "  ";
            }

            cout << "* ";
        }

        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    hollowPyramidPattern(num);

    return 0;
}