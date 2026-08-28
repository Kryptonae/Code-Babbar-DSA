// Average of a, b and c

#include <bits/stdc++.h>
using namespace std;

float average(int a, int b, int c) {
    float average;
    average = (a + b + c) / 3.0;
    return average;
}

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << fixed << setprecision(2);
    cout << "Average: " << average(a, b, c);

    return 0;
}