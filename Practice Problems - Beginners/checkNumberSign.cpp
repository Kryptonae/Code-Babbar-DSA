#include <iostream>
using namespace std;

string checkNumberSign(int num)
{
    // Implement the logic to check if the number is positive, negative, or zero
    if (num > 0)
    {
        return "Positive";
    }
    else if (num == 0)
    {
        return "Zero";
    }
    else
    {
        return "Negative";
    }
}

int main()
{
    int num;

    cin >> num;

    return 0;
}