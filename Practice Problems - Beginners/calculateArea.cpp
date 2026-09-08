#include <iostream>
using namespace std;

long long calculateArea(int length, int breadth)
{
    // Implement the logic to calculate area of a rectangle
    long long area;
    area = (long long)length * breadth;
    return area;
}

int main()
{
    int length;
    int breadth;

    cin >> length;
    cin >> breadth;

    cout << calculateArea(length, breadth);

    return 0;
}