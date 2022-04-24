// Let’s Build Nepal
// Wrong answer on test 2
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int building_nepal(const char *nepal)
{
    char str[30];
    int count = 0;
    scanf("%s", str);
    for (int j = 0; j < strlen(nepal); j++)
    {
        for (int k = 0; k < strlen(str); k++)
        {
            if (str[k] > 'A' and str[k] < 'Z')
                str[k] = tolower(str[k]);
            if (nepal[j] == str[k])
                count++;
            if (count >= strlen(nepal))
                return count;
            else
                continue;
        }
    }
    return 0;
}

int main()
{
    int cases;
    scanf("%d", &cases);
    const char *nepal = "nepal";
    const char *str1 = "Maile Nepal banauna sakchhu!!";
    const char *str2 = "Hami sabai milera Nepal Banau hai!!";
    for (int i = 1; i <= cases; i++)
    {
        if (building_nepal(nepal) > 0)
            printf("%s\n", str1);
        else
            printf("%s\n", str2);
    }
    return 0;
}