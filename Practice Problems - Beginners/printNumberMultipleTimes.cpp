#include <iostream>
using namespace std;

void printNumberMultipleTimes(int num, int n)
{
    // Implement the loop logic to print num, n times
    for (int i = 0; i < n; i++)
    {
        cout << num;
        
        if (i < n - 1)
            cout << " ";
    }
}

int main()
{
    int num;
    int n;

    cin >> num;
    cin >> n;

    printNumberMultipleTimes(num, n);

    return 0;
}