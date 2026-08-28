// Compound Interest

#include <bits/stdc++.h>
using namespace std;

double compoundInterst(double p, double r, double t) {
    double total;
    total = p * pow((1 + (r / 100)), t);
    return total;
}

int main()
{
    double p;
    double r;
    double t;

    cout << "Enter Principal Amount: $";
    cin >> p;

    cout << "Enter Annual interest rate (%): %";
    cin >> r;

    cout << "Enter Time in years: ";
    cin >> t;

    cout << "Result: " << compoundInterst(p, r, t);

    return 0;
}