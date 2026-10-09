#include <iostream>
#include <vector>
using namespace std;

int searchElementInArray(vector<int>& nums, int target) {
    // Implement the logic to search for an element in the array
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        int value = nums[i];

        if (value == target)
        {
            return i;
        }
    }

    return -1; // Placeholder return
}

int main()
{
    

    return 0;
}