// Thought Game
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int cases, num1, num2, avg; // variables
    scanf("%d", &cases);        // taking input for test cases
    for (size_t i{1}; i <= cases; i++)
    {
        scanf("%d %d", &num1, &num2); // taking input for two numbers
        avg = (num1 + num2) / 2;      // find the average of those numbers

        if (avg % 2 == 0)                     // check if the average is even or odd
            printf("Sadia will be happy.\n"); // if even
        else
            printf("Oops!\n"); // if odd
    }
    return 0;
}