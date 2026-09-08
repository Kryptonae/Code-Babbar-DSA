#include <iostream>
using namespace std;

int averageOfThree(int a, int b, int c)
{
    // Implement the logic to calculate the average of a, b, and c
    int average;
    average = (a + b + c) / 3;
    return average;
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << averageOfThree(a, b, c);

    return 0;
}