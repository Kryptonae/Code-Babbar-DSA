// Solid Pyramid Pattern

#include <iostream>
using namespace std;

void pyramid(int num)
{
    for (int i = 0; i < num; i++)
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
}

int main()
{
    int num;

    cout << "Enter a num: ";
    cin >> num;

    pyramid(num);

    return 0;
}