// A Girl's Story
// Accepted
// Author: Abuhena Rony
#include <iostream>
using namespace std;

int main()
{
    int xYearEarlier;
    int meenaAgePresent;
    int meenaAgeBefore;
    int rajuAgeBefore;
    int rajuAgePresent;

    cin >> xYearEarlier >> meenaAgePresent;

    meenaAgeBefore = meenaAgePresent - xYearEarlier;
    rajuAgeBefore = meenaAgeBefore / 2;
    rajuAgePresent = rajuAgeBefore + xYearEarlier;

    cout << rajuAgePresent;
    
    return 0;
}