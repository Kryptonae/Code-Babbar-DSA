#include <iostream>
using namespace std;

double convertKmToMiles(int km)
{
    double miles;

    miles = km * 0.621371;

    return miles;
}

int main()
{
    int km;

    cout << "Enter a number in kilometers: ";
    cin >> km;

    cout << km << " kilometers is equal to " << convertKmToMiles(km) << " miles." << endl;

    return 0;
}