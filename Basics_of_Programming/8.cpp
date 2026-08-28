// Print Even numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

void evenNum(int num) {
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        
    }
    
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    evenNum(num);

    return 0;
}