#include <iostream>
using namespace std;

void printRowWise(int arr[][2], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << ", ";
        }

        cout << endl;
    }
}

void printColWise(int arr[][2], int rowSize, int colSize)
{
    for (int i = 0; i < colSize; i++)
    {
        for (int j = 0; j < rowSize; j++)
        {
            cout << arr[i][j] << ", ";
        }

        cout << endl;
    }
}

void printRowWiseSum(int arr[][2], int rowSize, int colSize)
{

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;

        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Sum: " << sum << endl;
    }
}

void printColWiseSum(int arr[][2], int rowSize, int colSize)
{

    for (int col = 0; col < colSize; col++)
    {
        int sum = 0;

        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + arr[row][col];
        }

        cout << "Sum: " << sum << endl;
    }
}

pair<int, int> searchOn2DArray(int arr[][2], int n, int m, int target)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (arr[row][col] == target)
            {
                return {row, col};
            }
        }
    }
    return {-1, -1};
}

int maximumNumber2DArray(int arr[][2], int n, int m)
{
    int maxi = INT_MIN;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            maxi = max(maxi, arr[row][col]);
        }
    }
    return maxi;
}

int minimumNumber2DArray(int arr[][2], int n, int m)
{
    int mini = INT_MAX;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            mini = min(mini, arr[row][col]);
        }
    }
    return mini;
}

int main()
{
    // int num[3][2];
    int num[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    // int rowSize = 3;
    // int colSize = 2;

    // int num[3][2];
    // int rowSize = 3;
    // int colSize = 2;
    int n = 3;
    int m = 2;

    /* for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cin >> num[i][j];
        }
    } */

    /* for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << num[i][j];
        }
        cout << endl;
    } */

    // cout << "Koi Dekkat Nhi";

    // printRowWise(num, 3, 2);
    // printColWise(num, 3, 2);
    // printRowWiseSum(num, 3, 2);
    // printColWiseSum(num, 3, 2);

    // pair<int, int> p = searchOn2DArray(num, 3, 2, 9);
    // cout << "<" << p.first << ", " << p.second << ">" << endl;

    // cout << maximumNumber2DArray(num, 3, 2);
    cout << minimumNumber2DArray(num, 3, 2);

    return 0;
}