#include <iostream>
#include <cmath>
using namespace std;

string isNarcissistic(int num)
{
    int digit;
    int temp = num;
    int count = 0;
    int sum = 0;

    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (num == sum)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Is the number " << num << " a narcissistic number? " << endl << isNarcissistic(num) << endl;

    return 0;
}