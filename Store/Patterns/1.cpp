// Solid Square Pattern

#include <iostream>
using namespace std;

void solidSquare(int num) {
    for (int i = 0; i < num; i++)
    {
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

    solidSquare(num);

    return 0;
}