// Reverse Man
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>
using namespace std;

void Reverse_String(char str[])
{
    int len = strlen(str);
    for (int x = 0; x < len / 2; x++)
    {
        swap(str[x], str[len - x - 1]);
    }
}

int main()
{
    char str[100];
    scanf("%[^\n]s", str);
    Reverse_String(str);
    puts(str);
    return 0;
}