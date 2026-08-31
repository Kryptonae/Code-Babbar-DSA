// Linear Search
// Search for an Element in an Array

#include <iostream>
using namespace std;

int targetElement(int nums[], int size, int target)
{
    int num;

    for (int i = 0; i < size; i++)
    {
        num = nums[i];

        if (num == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int nums[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int capacity = 10;
    int target;

    cout << "Enter the Target Number: ";
    cin >> target;

    cout << targetElement(nums, size, target);

    return 0;
}