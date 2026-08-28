#include <iostream>
using namespace std;

void hollowSquare(int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == num - 1)
        {
            for (int j = 0; j < num; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            cout << "* ";

            for (int j = 0; j < num - 2; j++)
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
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    hollowSquare(num);

    return 0;
}