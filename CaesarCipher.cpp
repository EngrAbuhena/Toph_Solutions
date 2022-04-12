// Caesar Cipher
// Accepted
// Author: Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int shift;                             // shift variable
    char line[101];                        // string variable
    scanf("%d %[^\n]s", &shift, line);     // read input for shift and string
    for (int x = 0; x < strlen(line); x++) // loop
    {
        if (line[x] == ' ') // check if the char is a space
            continue;
        else
        {
            line[x] = line[x] - shift; // apply shift into string
            if (line[x] < 'a')         // check if the value is not alphabets
            {
                line[x] = 'z' - ('a' - line[x]) + 1;
                // printf("%d ", line[x]);
            }
            else
                continue;
        }
    }
    for (int y = 0; y < strlen(line); y++) // print the updated string
        printf("%c", line[y]);
    return 0;
}