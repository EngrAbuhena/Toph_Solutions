// Pascal's Triangle
//
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int row;
    scanf("%d", &row);

    long long int triangle[30][30];

    long long int sum = 1;
    for (int a = 1; a <= row / 2; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%lld %lld\n", triangle[a][b]);
        }
    }

    return 0;
}