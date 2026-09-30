// Print counting from 1 to N

#include <bits/stdc++.h>
using namespace std;

void counting(int num) {
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    
}

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    counting(num);

    return 0;
}