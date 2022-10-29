// Digit Separation
// ACCEPTED
// Created by Abuhena Rony

#include <bits/stdc++.h>

int summation(char n[])
{
    int sum = 0;
    for (size_t i = 0; i < strlen(n); i++)
    {
        sum += (n[i] - '0');
    }
    return sum;
}

int main()
{
    char number[1001];

    // Read the number until End Of File
    while (scanf("%s", number) != EOF)
    {
        printf("%d\n", summation(number));
    }
    return 0;
}
