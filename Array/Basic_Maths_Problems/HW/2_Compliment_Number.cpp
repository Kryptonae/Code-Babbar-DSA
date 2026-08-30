// Find 2's Compliment of a Number

#include <iostream>
using namespace std;

int twosCompliment(int num) {
    int one_scomp = ~num;
    int two_scomp = one_scomp + 1;
    return two_scomp;
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << twosCompliment(num);

    return 0;
}