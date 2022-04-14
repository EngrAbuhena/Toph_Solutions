// Tower Of Sticks
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    while(true)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            int count = 0;
            while (a > b)
            {
                a -= 1;
                b += 1;
                count++;
            }
            if (count > 0 and a == b)
                printf("%d\n", count);
            else
                printf("impossible\n");
        }
        else if (a < b)
        {
            int count = 0;
            while (a < b)
            {
                a += 1;
                b -= 1;
                count++;
            }
            if (count > 0 and a == b)
                printf("%d\n", count);
            else
                printf("impossible\n");
        }
        else
            break;
    }
    return 0;
}