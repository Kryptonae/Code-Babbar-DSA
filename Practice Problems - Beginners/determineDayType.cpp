#include <iostream>
using namespace std;

string determineDayType(int day)
{
    // Implement the if-else-if ladder logic to determine if it's a weekday or weekend
    if (day >= 1 && day <= 5)
    {
        return "Weekday";
    }
    else 
    {
        return "Weekend";
    }
}

int main()
{
    int day;

    cin >> day;

    cout << determineDayType(day);

    return 0;
}