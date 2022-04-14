// Running Average Again
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    long long int cases, x, y;
    scanf("%lld", &cases);
    int number[100001];
    for (x = 0; x < cases; x++)
    {
        scanf("%d", &number[x]);
    }
    double sum = 0.0;
    for (y = 0; y < cases; y++)
    {
        sum = sum + number[y];
        printf("%.10f\n", sum / (y + 1));
    }
    return 0;
}