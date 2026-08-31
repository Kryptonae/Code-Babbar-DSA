#include <iostream>
#include <utility>
using namespace std;

pair<int, int> zeroesOnes(int num[], int size)
{
    int countZeroes = 0;
    int countOnes = 0;
    int nums;

    for (int i = 0; i < size; i++)
    {
        nums = num[i];

        if (nums == 0)
        {
            countZeroes++;
        }
        else if (nums == 1)
        {
            countOnes++;
        }
    }

    return {countZeroes, countOnes};
}

int main()
{
    int num[5] = {1, 0, 0, 0, 1};
    int size = 5;

    pair<int, int> ans = zeroesOnes(num, size);

    cout << "Zeroes: " << ans.first << endl;
    cout << "Ones: " << ans.second << endl;

    return 0;
}