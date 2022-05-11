// Pascal's Triangle
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int row;           // how much row do we have
    scanf("%d", &row); // read input for rows

    long int sum = pow(2, row - 1); // sum of every elements of that row is 2 to the power n-1

    if (row > 0 and row < 30) // check if the row is less than 30
        printf("%ld", sum);   // print sum
    return 0;
}