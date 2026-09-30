// Find Simple Interest

#include <bits/stdc++.h>
using namespace std;

double simpleInterest(double p, double r, double t) {
    double result;
    result = (p * r * t) / 100;
    return result;
}

int main()
{
    double p;
    double r;
    double t;

    cout << "Enter Principal amount: $";
    cin >> p;

    cout << "Enter Annual interest rate: ";
    cin >> r;

    cout << "Enter Time period, measured in years: ";
    cin >> t;

    cout << "Result: $" << simpleInterest(p, r, t);

    return 0;
}