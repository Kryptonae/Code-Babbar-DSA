#include <iostream>
using namespace std;

int factorial(int num)
{

    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        int ans = 1;

        for (int i = 0; i < num; i++)
        {
            ans = ans * (num - i);
        }

        return ans;
        
    }
}

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << factorial(num);

    return 0;
}