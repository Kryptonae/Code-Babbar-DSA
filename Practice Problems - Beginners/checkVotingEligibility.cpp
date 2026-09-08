#include <iostream>
using namespace std;

string checkVotingEligibility(int age)
{
    // Implement the logic to check voting eligibility
    if (age >= 18)
    {
        return "Eligible to vote";
    }
    else 
    {
        return "Not eligible to vote";
    }
    
}

int main()
{
    int age;

    cin >> age;

    cout << checkVotingEligibility(age);

    return 0;
}