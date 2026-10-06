#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        cout << "2D Vector Example" << endl;

        vector<vector<int>> arr(5, vector<int>(4, 0));

        int totalRows = arr.size();
        cout << "Total rows: " << totalRows << endl;

        int totalCols = arr[0].size();
        cout << "Total columns: " << totalCols << endl;
     */

    vector<vector<int>> brr(4);

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int rowCout = brr.size();
    cout << "Total rows: " << rowCout << endl;

    for (int i = 0; i < rowCout; i++)
    {
        int colCount;

        colCount = brr[i].size();

        cout << "Total columns in row " << i + 1 << ": " << colCount << endl;
    }

    return 0;
}