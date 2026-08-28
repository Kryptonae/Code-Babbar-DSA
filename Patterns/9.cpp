// Inverted Solid Pyramid

#include <iostream>
using namespace std;

void invertedSolidPyramid(int num) {
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < 2 * (num - i) - 1; j++)
        {
            cout << "* ";
        }

        for (int j = 0; j < i; j++)
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

    invertedSolidPyramid(num);

    return 0;
}