// Print Counting from n to 1

#include <bits/stdc++.h>
using namespace std;

void countingBackwards(int num) {
    for (int i = num; i > 0; i--)
    {
        cout << i << " ";
    }
    
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    countingBackwards(num);

    return 0;
}