#include <iostream>
using namespace std;

void solidRectangle(int row, int column) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
}

int main()
{
    int row;
    int column;

    cout << "Enter Number of Rows: ";
    cin >> row;

    cout << "Enter Number of Columns: ";
    cin >> column;

    solidRectangle(row, column);

    return 0;
}