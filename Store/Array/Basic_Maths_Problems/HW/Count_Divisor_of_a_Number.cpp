// Count Divisor of a Number

#include <iostream>
using namespace std;

int countDivisor (int num) {
    
    int count = 2;

    if (num == 1)
    {
        return 1;
    }

    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            count++;
        }
        
    }
    
    return count;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << countDivisor(num);

    return 0;
}