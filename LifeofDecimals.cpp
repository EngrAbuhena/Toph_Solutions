// Life of Decimals
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void life_of_decimals(int cases, int pi[])
{
    int index;
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d", &index);

        printf("%d\n", pi[index-1]);
    }
}

int main()
{
    int pi[12] = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9};
    int cases;
    scanf("%d", &cases);
    life_of_decimals(cases, pi);
    return 0;
}