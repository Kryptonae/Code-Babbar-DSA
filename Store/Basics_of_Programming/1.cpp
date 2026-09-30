// Print Sum of a and b

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a;
    int b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Total: " << sum(a, b);

    return 0;
}