// Multiply 2 numbers after taking input

#include <bits/stdc++.h>
using namespace std;

int multiply(int num1, int num2) {
    int result;
    result = num1 * num2;
    return result;
}

int main()
{
    int num1;
    int num2;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    cout << "Result: " << multiply(num1, num2);

    return 0;
}