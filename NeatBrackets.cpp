// Neat Brackets
// Wrong answer on test 8
// Author @ Abuhena Rony
#include <bits/stdc++.h>
#include <cstring>

bool is_valid_parentheses(char in[])
{
    int len = strlen(in);

    if (len % 2 != 0 or in[0] == ')' or in[len - 1] == '(')
        return false;
    else
    {
        int brackets = 0;
        for (int a = 0; a < len; a++)
        {
            if (in[a] == '(')
                brackets++;
            else if (in[a] == ')')
                brackets--;
            else
                break;
        }
        if (brackets == 0)
            return true;
        else
            return false;
    }
}

int main()
{
    char input[26];
    scanf("%s", input);
    if (is_valid_parentheses(input))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}