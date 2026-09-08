#include <iostream>
using namespace std;

int simpleInterest(int P, int R, int T)
{
    // your code goes here
    long long result;
    result = (1ll * P * R * T) / 100;
    return result;
}

int main()
{
    int P;
    int R;
    int T;

    cin >> P;
    cin >> R;
    cin >> T;

    cout << simpleInterest(P, R, T);

    return 0;
}