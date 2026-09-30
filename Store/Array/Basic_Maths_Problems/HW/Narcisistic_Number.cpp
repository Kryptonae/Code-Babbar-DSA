// Check if a Number is a Narcisistic Number or Not

#include <iostream>
#include <cmath>
using namespace std;

string narcissisticNumber(int num)
{
    int sum = 0;
    int temp = num;
    int count = 0;

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }

    temp = num; // 🔥 reset

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return num == sum ? "Yes" : "No";
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << narcissisticNumber(num);

    return 0;
}