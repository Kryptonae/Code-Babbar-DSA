// Number Triangle Pattern

#include <iostream>
using namespace std;

void numberTriangle(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    numberTriangle(num);

    return 0;
}