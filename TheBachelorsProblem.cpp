// The Bachelor's Problem
// ACCEPTED
// Created by Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int testc;
    scanf("%d", &testc); // Taking input for Testcases

    for (size_t i = 1; i <= testc; i++)
    {
        // Taking input for House Rent, Meal, Internet Bill, Maid Bill, Electricity Bill, and Garbage Bill of current month
        int num1[100];
        int expense = 0;
        for (size_t j = 0; j < 6; j++)
        {
            scanf("%d", &num1[j]);
            expense = expense + num1[j];
        }

        // Taking input for current month's budget
        int num2[100];
        int budget;
        scanf("%d", &budget);

        // Taking input for next month's bills
        int bill = 0;
        for (size_t k = 0; k < 6; k++)
        {
            scanf("%d", &num2[k]);
            bill = bill + num2[k];
        }

        // Simple calculation
        int next = bill - (budget - expense);
        if (next < 0)
            next = 0;

        // Printing the result
        printf("Case %d: %d\n", i, next);
    }

    return 0;
}
