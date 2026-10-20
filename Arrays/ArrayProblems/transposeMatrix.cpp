#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    vector<vector<int>> transpose = matrix;
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    return transpose;
}

int main()
{

    return 0;
}