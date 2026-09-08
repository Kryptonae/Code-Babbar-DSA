#include <iostream>
using namespace std;

int sumOfTwoIntegers(int a, int b)
{
    // Implement the logic to calculate the sum of a and b
    int result;
    result = a + b;
    return result;
}

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << sumOfTwoIntegers(a, b);

    return 0;
}