#include <iostream>
using namespace std;

int twosComplement(int num)
{
    int oneComplement = ~num;
    int twosComplement = oneComplement + 1;
    return twosComplement;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Two's complement of " << num << " is: " << twosComplement(num) << endl;

    return 0;
}