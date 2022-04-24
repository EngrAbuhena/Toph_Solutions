// Area
// Wrong answer on test 2
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int find_area(int num)
{
    int area = (2 * num) - 4;
    return area;
}

int main()
{
    int cases, number, area;
    scanf("%d", &cases);
    for (int x = 1; x <= cases; x++)
    {
        scanf("%d", &number);
        area = find_area(number);
        printf("Case %d: %d", x, area);
    }
    return 0;
}