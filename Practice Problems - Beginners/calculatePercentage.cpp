#include <iostream>
using namespace std;

double calculatePercentage(int totalMarks, int obtainedMarks)
{
    // Implement the logic to calculate the percentage
    totalMarks = 500;
    
    double percent;
    percent = (obtainedMarks * 100.0) / totalMarks;

    return percent;
}

int main()
{
    int totalMarks;
    int obtainedMarks;

    cin >> obtainedMarks;

    cout << calculatePercentage(totalMarks, obtainedMarks) << "%";

    return 0;
}