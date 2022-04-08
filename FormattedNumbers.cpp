// Formatted Numbers
// Accepted
// Author: Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    char number[11];

    scanf("%s", number); // read string
    // gets(number); // read string
    // fgets(number, sizeof(number), stdin); // read string
    // printf("%d\n", strlen(number)); // length of the string

    if (strlen(number) > 3)
    {
        int count = 0;
        for (int x = 0; x < strlen(number); x++)
        {
            if (strlen(number) == 4)
            {
                printf("%c", number[x]);
                count++;
                if (count == 1)
                    printf(",");
            }
            else if (strlen(number) == 5)
            {
                printf("%c", number[x]);
                count++;
                if (count == 2)
                    printf(",");
            }
            else if (strlen(number) == 6)
            {
                printf("%c", number[x]);
                count++;
                if (count == 3)
                    printf(",");
            }
            else if (strlen(number) == 7)
            {
                printf("%c", number[x]);
                count++;
                if (count == 1 or count == 4)
                    printf(",");
            }
            else if (strlen(number) == 8)
            {
                printf("%c", number[x]);
                count++;
                if (count == 2 or count == 5)
                    printf(",");
            }
            else if (strlen(number) == 9)
            {
                printf("%c", number[x]);
                count++;
                if (count % 3 == 0 and count != strlen(number))
                    printf(",");
            }
            else if (strlen(number) == 10)
            {
                printf("%c", number[x]);
                count++;
                if (count == 1 or count == 4 or count == 7)
                    printf(",");
            }
            else
                continue;
        }
    }
    else
        printf("%s", number);

    // printf("%s", number);
    // puts(number); // display string
    return 0;
}