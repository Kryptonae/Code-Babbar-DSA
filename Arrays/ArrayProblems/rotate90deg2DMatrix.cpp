#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // int rowSize = matrix.size();
    // int colSize = matrix[0].size();
    // since n x n  matrix hai rowSize = colSize = n.
    int n = matrix.size();
    // vector<vector<int>> transpose(colSize, vector<int>(rowSize, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{

    return 0;
}