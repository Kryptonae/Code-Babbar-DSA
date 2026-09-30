// Floyds Triangle Pattern

#include <iostream>
using namespace std;

void floydsTriangle(int num)
{
    int count = 1;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << count++ << " ";
        }
        
        cout << endl;
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    floydsTriangle(num);

    return 0;
}