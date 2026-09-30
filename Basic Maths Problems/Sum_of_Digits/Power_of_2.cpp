#include <iostream>
using namespace std;

string powerOf2(int num)
{
    if (num == 0)
    {
        return "No";
    }
    else if ((num & (num - 1)) == 0)
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

    cout << powerOf2(num);

    return 0;
}