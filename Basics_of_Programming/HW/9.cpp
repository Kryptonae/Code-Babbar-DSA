// Print max of 2 Number

#include <iostream>
#include <math.h>
using namespace std;

void isMax(int x, int y) {
    int result;
    result = max(x, y);
    cout << "Max Number between " << x <<" & " << y << " is: " << result;
}

int main()
{
    int x;
    int y;

    cout << "Enter Num 1: ";
    cin >> x;

    cout << "Enter Num 2: ";
    cin >> y;

    isMax(x, y);

    return 0;
}