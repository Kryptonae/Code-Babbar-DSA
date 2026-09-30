#include <iostream>
using namespace std;

int countDivisorsNumber(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    return count;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << countDivisorsNumber(num);

    return 0;
}