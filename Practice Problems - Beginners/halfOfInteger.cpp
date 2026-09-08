#include <iostream>
using namespace std;

double halfOfInteger(int num)
{
    double result;
    result = num / 2.0;
    return result;
}

int main()
{
    int num;

    cin >> num;

    cout << halfOfInteger(num);

    return 0;
}