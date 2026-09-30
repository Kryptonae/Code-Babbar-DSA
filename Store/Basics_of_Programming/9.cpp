// Add N numbers from users

#include <bits/stdc++.h>
using namespace std;

void nNumberSum(int num) {
    int result = 0;
    int x;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the Number: ";
        cin >> x;

        result += x;
    }

    cout << "Total: " << result;
    
}

int main()
{
    int num; 

    cout << "How many Numbers to add: ";
    cin >> num;

    nNumberSum(num);

    return 0;
}