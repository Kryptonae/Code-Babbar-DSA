// Check if a Number is Power of 2 or Not.

#include <iostream>
using namespace std;

string powerOfTwo(long long int num)
{
    if ((num & (num - 1)) == 0)
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

    cout << "Enter a Number: ";
    cin >> num;

    cout << powerOfTwo(num);

    return 0;
}