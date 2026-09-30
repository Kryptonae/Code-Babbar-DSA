// Find Even or Odd Number

#include <iostream>
using namespace std;

void evenOrOdd(int num)
{
    if ((num & 1) != 0)
    {
        cout << "Odd: " << num;
    }

    else
    {
        cout << "Even: " << num;
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    evenOrOdd(num);

    return 0;
}