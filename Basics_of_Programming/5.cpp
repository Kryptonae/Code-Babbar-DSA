// Calculate Percentage

#include <bits/stdc++.h>
using namespace std;

float percentage(int num1, int num2, int num3, int num4, int num5) {
    float percentage;
    float total = 500.0;
    int sum;
    sum = num1 + num2 + num3 + num4 + num5;
    return percentage = (sum / total) * 100;
}

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    cout << "Enter Num3: ";
    cin >> num3;

    cout << "Enter Num4: ";
    cin >> num4;

    cout << "Enter Num5: ";
    cin >> num5;

    cout << "Percentage: " << percentage(num1, num2, num3, num4, num5) << "%";

    return 0;
}