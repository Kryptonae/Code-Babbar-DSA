// Area of Rectange

#include <bits/stdc++.h>
using namespace std;

float area(float length, float breath) {
    float area;
    area = length * breath;
    return area;
}

int main()
{
    float length;
    float breath;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breath: ";
    cin >> breath;

    cout << fixed << setprecision(2);
    cout << "Area: " << area(length, breath);

    return 0;
}