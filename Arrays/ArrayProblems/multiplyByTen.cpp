#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplyByTen(vector<int>& arr) {
    // Start completing the function

    vector<int> arrCopy = arr;

    int size = arrCopy.size();

    for (int i = 0; i < size; i++)
    {
        arrCopy[i] = arrCopy[i] * 10;
    }

    return arrCopy;
}

int main()
{
    

    return 0;
}