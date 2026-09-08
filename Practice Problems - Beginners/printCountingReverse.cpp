#include <iostream>
using namespace std;

void printCountingReverse(int n)
{
    // Implement the loop logic to print numbers from n down to 1
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    
}

int main()
{
    int n;

    cin >> n;

    printCountingReverse(n);

    return 0;
}