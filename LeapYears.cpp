// Leap Years
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isleapyear(int y)
{
    if (y % 4 == 0 and y % 400 != 0)
        return true;
    else
        return false;
}

int main()
{
    int year = 0;
    bool result;
    cin >> year;
    if (0 < year < 9999)
    {
        result = isleapyear(year);
        if (result == true)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}