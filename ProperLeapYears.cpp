// Proper Leap Years
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void is_leap_year(int yr)
{
    if (yr % 4 == 0) // check if the year is divisible by 4
    {
        if (yr % 100 == 0 and yr % 400 == 0) // check if the year is also divisible by 100 and 400
            printf("Yes");
        else if (yr % 100 != 0 and yr % 400 != 0) // check if the year is also not-divisible by 100 and 400
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No");
}

int main()
{
    int year;           // year must be a integer variable
    scanf("%d", &year); // read inputed year from the user
    is_leap_year(year); // call the leap year function
    return 0;
}