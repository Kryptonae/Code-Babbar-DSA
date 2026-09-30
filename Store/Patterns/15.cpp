// Rhombus Pattern

#include <iostream>
using namespace std;

void rhombusPattern (int num) {
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < num; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
        
    }
    
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    rhombusPattern(num);

    return 0;
}