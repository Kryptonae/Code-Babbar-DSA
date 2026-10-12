#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printPairs(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")";
        }
        cout << endl;
    }
}

void printTriplets(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")";
            }
            cout << endl;
        }
        cout << endl;
    }
}

vector<int> sortArray0And1(vector<int> &nums)
{
    // Implement the function here.
    /*
    vector<int> numsCopy = nums;

    sort(numsCopy.begin(), numsCopy.end());

    return numsCopy;
 */
    int countZeroes = 0;
    int countOnes = 0;

    vector<int> numsCopy = nums;

    int size = numsCopy.size();

    for (int i = 0; i < size; i++)
    {
        if (numsCopy[i] == 0)
        {
            countZeroes++;
        }
        if (countOnes == 1)
        {
            countOnes++;
        }
    }

    fill(numsCopy.begin(), numsCopy.begin() + countZeroes, 0);
    fill(numsCopy.begin() + countZeroes, numsCopy.end(), 1);

    return numsCopy;
}

int main()
{

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    printPairs(arr);
    // printTriplets(arr);

    return 0;
}