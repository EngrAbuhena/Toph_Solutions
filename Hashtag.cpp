// Hashtag
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

void hashtag(char str[])
{
    int len = strlen(str);
    for (int x = 0; x < len; ++x)
    {
        if (str[x] == ' ')
        {
            for (int i = x; i < len; ++i)
                str[i] = str[i + 1];
        }
    }
}

int main()
{
    char str[100];
    scanf("%[^\n]s", str);
    hashtag(str);
    puts(str);
    return 0;
}