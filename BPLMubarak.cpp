// BPL Mubarak!
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void Ball_Count(char str[])
{
    int len = strlen(str);
    int balls = 0;
    int overs = 0;
    for (int x = 0; x < len; x++)
    {
        if (str[x] == 'W' or str[x] == 'N' or str[x] == 'D')
            continue;
        else
            balls++;
    }
    overs = balls / 6;
    balls = balls % 6;
    if (balls == 0)
    {
        if (overs == 1)
            printf("%d OVER", overs);
        else if (overs > 1)
            printf("%d OVERS", overs);
    }
    else
    {
        if (overs == 1)
            printf("%d OVER ", overs);
        else if (overs > 1)
            printf("%d OVERS ", overs);
        if (balls == 1)
            printf("%d BALL", balls);
        else if (balls > 1)
            printf("%d BALLS", balls);
    }
}

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int x = 1; x <= cases; x++)
    {
        char str[1000];
        scanf("%s", &str);
        Ball_Count(str);
        printf("\n");
    }
    return 0;
}