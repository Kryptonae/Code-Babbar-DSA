#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(int radius)
{
    #define M_PI 3.14159265358979323846 // Define the value of PI
    double area;

    area = M_PI * pow(radius, 2);
    return area;
}

int main()
{
    int radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circle is: " << areaOfCircle(radius) << endl;

    return 0;
}