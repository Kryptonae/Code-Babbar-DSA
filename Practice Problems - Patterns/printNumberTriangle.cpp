#include <iostream>
using namespace std;

void printNumberTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    printNumberTriangle(n);

    return 0;
}