// For Loop FTW
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int number = 0;
    int max = 0;
    scanf("%d", &number);
    for (int x = 1; x <= 2; x++)
    {
        for (int y = number; y >= number; y--)
        {
            if (x * y == number and x + y > max)
            {
                max = x + y;
            }
        }
    }
    printf("%d", max);
    return 0;
}