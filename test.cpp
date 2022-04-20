// Set Union
//
// Author @ Abuhena Rony
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, a;
    set<int, less<int>> number;

    scanf("%d %d", &n1, &n2);

    int input, num3 = n1 + n2;

    for (a = 0; a < num3; ++a)
    {
        scanf("%d", &input);
        number.insert(input);
    }
    
    auto it = number.begin();
    printf("%d", *it);
    for (it++; it != number.end(); it++)
        printf(" %d", *it);
    printf("\n");

    return 0;
}