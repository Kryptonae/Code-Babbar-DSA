// Perimeter of a Triangle

#include <bits/stdc++.h>
using namespace std;

int perimeter(int x, int y, int z) {
    int result;
    result = x + y + z;
    return result;
}

int main()
{
    int x;
    int y;
    int z;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter z: ";
    cin >> z;

    cout << "Result: " << perimeter(x, y, z);

    return 0;
}