#include <iostream>
using namespace std;

int findPerimeter(int a, int b, int c)
{
    // your code goes here
    int total;
    total = a + b + c;
    return total;
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << findPerimeter(a, b, c);

    return 0;
}