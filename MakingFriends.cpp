// Making Friends
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    long long int number, x, y = 0;
    char num2[1000001];
    scanf("%lld", &number);
    for (x = 1; x < number; x++)
    {
        if (number % x == 0)
        {
            num2[y] = x;
            y++;
        }
    }
    printf("%lld\n", y);
    return 0;
}