#include <iostream>
using namespace std;

void printSolidRectangle(int n, int m)
{
    // Implement the pattern printing logic here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "* ";
        }

        cout << endl;
        
    }
    
}

int main()
{
    int n;
    int m;

    cin >> n;
    cin >> m;

    printSolidRectangle(n, m);

    return 0;
}