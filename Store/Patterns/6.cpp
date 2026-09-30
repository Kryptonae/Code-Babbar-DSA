// Hollow Right Angle Triangle

#include <iostream>
using namespace std;

void hollowRigthAngleTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == 1 || i == num - 1)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
        else
        {
            cout << "* ";

            for (int j = 0; j < i + 1 - 2; j++)
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

    hollowRigthAngleTriangle(num);

    return 0;
}