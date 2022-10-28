// Counting the Counts
// ACCEPTED
// Abuhena Rony

#include <bits/stdc++.h>

bool grade_check(int num)
{
    if (num >= 80)
        return true;
    else
        return false;
}

int main()
{
    int students;
    scanf("%d", &students);
    int count = 0;
    for (int i = 0; i < students; ++i)
    {
        int number;
        scanf("%d", &number);

        if (grade_check(number))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
