// Victory Robot
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void bijoy_robot(int number)
{
    const char *odd = "Joy";
    const char *even = "Bangla";

    if (number == 1971)
        printf("%s %s\n", odd, even);
    else if (number % 2 != 0)
        printf("%s\n", odd);
    else if (number % 2 == 0)
        printf("%s\n", even);
    else
        printf("");
}

int main()
{
    int cases, num;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d", &num);
        bijoy_robot(num);
    }

    return 0;
}