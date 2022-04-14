// Byang's Additions
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    char num1[10];
    char num2[10];
    scanf("%s %s", &num1, &num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int diff = 0;

    if (len1 > len2)
        diff = len1 - len2;
    else
        diff = len2 - len1;

    bool carry;
    int sum = 0;
    for (int x = len1 - 1; x >= 0; --x)
    {
        int y = x - diff;
        sum = (num1[x] - '0') + (num2[y] - '0');
        if (sum > 9)
        {
            carry = true;
            // printf("%d ",sum);
            break;
        }
        else
        {
            carry = false;
            // printf("%d ",sum);
            continue;
        }
    }
    if (carry)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}