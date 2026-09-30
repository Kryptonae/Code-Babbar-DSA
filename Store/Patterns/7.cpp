// Inverted Right Angle Triangle

#include <iostream>
using namespace std;

void invertedRightAngleTriangle(int num) {
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j >= i + 1 ; j--)
        {
            cout << "* ";
        }

        cout << endl;
        
    }
    
}

int main()
{
    int num;

    cout << "Enter Num: ";
    cin >> num;

    invertedRightAngleTriangle(num);

    return 0;
}