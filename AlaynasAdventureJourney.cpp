// Alayna's Adventure Journey
// ACCEPTED
// Author @ Abuhena Rony

#include <bits/stdc++.h>

int main()
{
    int groups;
    int elephants[1000];
    scanf("%d", &groups);
    int max = 0;
    for (int i = 0; i < groups; ++i)
    {
        scanf("%d", &elephants[i]);
        if (elephants[i] > max)
            max = elephants[i];
    }
    printf("%d\n", max);
    return 0;
}
