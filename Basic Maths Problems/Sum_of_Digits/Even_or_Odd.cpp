#include <iostream>
#include <algorithm>
using namespace std;

void evenorOdd(int num)
{
    if (num & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    evenorOdd(num);

    return 0;
}