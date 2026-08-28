// Print Half of a

#include <bits/stdc++.h>
using namespace std;

float half(int a) {
    float half;
    half = a / 2.0;
    return half;
}

int main()
{
    int a;

    cout << "Enter a: ";
    cin >> a;

    cout << fixed << setprecision(2);
    cout << "Result: " << half(a);

    return 0;
}