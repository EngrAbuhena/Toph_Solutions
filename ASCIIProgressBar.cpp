// ASCII Progress Bar
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void ascii_progress_bar(double perc)
{
    int per = floor(perc);
    int limit = per / 10;
    char percent = '%';
    char brac1 = '[';
    char brac2 = ']';
    printf("%c", brac1);
    for (int x = 1; x <= 10; x++)
    {
        if (x <= limit)
            printf("+");
        else if (x > limit)
            printf(".");
        else
            break;
    }
    printf("%c", brac2);
    printf(" %d", per);
    printf("%c", percent);
}

int main()
{
    double percent;
    scanf("%lf", &percent);
    ascii_progress_bar(percent);
    return 0;
}