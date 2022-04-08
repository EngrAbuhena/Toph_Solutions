// Formatted Numbers
// Accepted
// Author: Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    char number[10];
    // printf("%d\n", strlen(number)); // length of the string
    //   scanf("%s", number);
    fgets(number, sizeof(number), stdin); // read string

    if (strlen(number) == 4)
    {
        printf("%c", number[0]);
        printf(",");
        printf("%c", number[1]);
        printf("%c", number[2]);
        printf("%c", number[3]);
    }
    else if (strlen(number) == 5)
    {
        printf("%c", number[0]);
        printf("%c", number[1]);
        printf(",");
        printf("%c", number[2]);
        printf("%c", number[3]);
        printf("%c", number[4]);
    }
    else if (strlen(number) == 6)
    {
        printf("%c", number[0]);
        printf("%c", number[1]);
        printf("%c", number[2]);
        printf(",");
        printf("%c", number[3]);
        printf("%c", number[4]);
        printf("%c", number[5]);
    }
    else if (strlen(number) == 7)
    {
        printf("%c", number[0]);
        printf(",");
        printf("%c", number[1]);
        printf("%c", number[2]);
        printf("%c", number[3]);
        printf(",");
        printf("%c", number[4]);
        printf("%c", number[5]);
        printf("%c", number[6]);
    }
    else if (strlen(number) == 8)
    {
        printf("%c", number[0]);
        printf("%c", number[1]);
        printf(",");
        printf("%c", number[2]);
        printf("%c", number[3]);
        printf("%c", number[4]);
        printf(",");
        printf("%c", number[5]);
        printf("%c", number[6]);
        printf("%c", number[7]);
    }
    else if (strlen(number) == 9)
    {
        printf("%c", number[0]);
        printf("%c", number[1]);
        printf("%c", number[2]);
        printf(",");
        printf("%c", number[3]);
        printf("%c", number[4]);
        printf("%c", number[5]);
        printf(",");
        printf("%c", number[6]);
        printf("%c", number[7]);
        printf("%c", number[8]);
    }
    else if (strlen(number) == 10)
    {
        printf("%c", number[0]);
        printf(",");
        printf("%c", number[1]);
        printf("%c", number[2]);
        printf("%c", number[3]);
        printf(",");
        printf("%c", number[4]);
        printf("%c", number[5]);
        printf("%c", number[6]);
        printf(",");
        printf("%c", number[7]);
        printf("%c", number[8]);
        printf("%c", number[9]);
    }
    else
        printf("%s", number);

    // printf("%s", number);
    // puts(number); // display string
    return 0;
}