// Thought Game
//
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int cases, num1, num2, sum;
    double average;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d %d", &num1, &num2);
        sum = num1 + num2;
        average = sum/2;
        if (average % 2.0 == 0.0)
        {
            printf("%d\t",average);
            printf("Sadia will be happy.");
        }
        else
            printf("Oops!");
    }

    return 0;
}