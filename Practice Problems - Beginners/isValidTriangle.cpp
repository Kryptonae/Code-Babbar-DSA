#include <iostream>
using namespace std;

string isValidTriangle(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
    
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << isValidTriangle(a, b, c);

    return 0;
}