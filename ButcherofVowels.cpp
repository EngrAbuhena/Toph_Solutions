// Butcher of Vowels
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int Finding_Vowels(char str[])
{
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
        {
            count++;
            break;
        }
        else
            continue;
    }
    if (count > 0)
        return 1;
    else
        return 0;
}

int main()
{
    int cases;
    scanf("%d", &cases);
    char str[100];
    for (int x = 0; x < cases; x++)
    {
        scanf("%s", str);
        if (Finding_Vowels(str) == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}