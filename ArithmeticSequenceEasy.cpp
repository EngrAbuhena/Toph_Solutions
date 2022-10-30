// Arithmetic Sequence (Easy)
// ACCEPTED
// Created by Abuhena Rony

#include <bits/stdc++.h>

int main()
{
    int n, m;

    // Taking input for length of the sequence
    scanf("%d", &n);

    // Taking input for number of items to substract
    scanf("%d", &m);
    int sum1 = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum1 += i;
    }

    // Taking input of numbers which will substract
    int array[101];
    int sum2 = 0;
    for (int i = 1; i <= m; ++i)
    {
        scanf("%d", &array[i]);

        // Summation of the subtracted numbers
        sum2 += array[i];
    }

    // Sum of the numbers of the sequence + sum of the subtracted numbers
    printf("%d", sum1 - sum2);
    return 0;
}
