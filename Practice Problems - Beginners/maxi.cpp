#include <iostream>
#include <algorithm>
using namespace std;

int maxi(int a, int b, int c)
{
    // your code goes here
    int result;

    result = max(a, max(b, c));

    return result;
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << maxi(a, b, c);

    return 0;
}