// Check Valid Triangle or Not

#include <bits/stdc++.h>
using namespace std;

void isTriangle(int a, int b, int c) {
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "It's a Valid Triangle";
    }
    else {
        cout << "It's Not a Valid Triangle";
    }
    
}

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    isTriangle(a, b, c);

    return 0;
}