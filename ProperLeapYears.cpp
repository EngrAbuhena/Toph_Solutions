// Proper Leap Years
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void is_leap_year(int yr)
{
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0 and yr % 400 == 0)
            printf("Yes");
        else if (yr % 100 != 0 and yr % 400 != 0)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No");
}

int main()
{
    int year;
    scanf("%d", &year);
    is_leap_year(year);
    return 0;
}