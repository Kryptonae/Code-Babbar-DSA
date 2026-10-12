#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int> &arr)
{
    // Implement logic to find the average
    int size = arr.size();
    int count = 0;
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        int numbers = arr[i];
        sum += numbers;
        count++;
    }

    return sum / count;
    
}

int main()
{

    return 0;
}