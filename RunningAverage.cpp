// Running Average
// Accepted
// Author: Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int number[102];
    int x;
    int cases;
    scanf("%d", &cases);
    for (x = 0; x < cases; x++)
    {
        scanf("%d", &number[x]);
    }
    double sum = 0.0;
    for (int a = 0; a < cases; a++)
    {
        sum = sum + number[a];
        printf("%0.10f\n", sum / (a + 1));
    }
    return 0;
}