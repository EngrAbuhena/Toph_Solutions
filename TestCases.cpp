// Test Cases
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int cases, cpul, meml;
    scanf("%d %d %d", &cases, &cpul, &meml);
    int diff, cpu, mem;

    bool wa = false, cle = false, mle = false;
    for (size_t i{1}; i <= cases; i++)
    {
        scanf("%d %d %d", &diff, &cpu, &mem);

        if (cpu > cpul)
        {
            cle = true;
            break;
        }
        else if (mem > meml)
        {
            mle = true;
            break;
        }
        else if (diff > 0)
        {
            wa = true;
            break;
        }
        else
            continue;
    }

    if (cle)
        printf("CLE\n");
    else if (mle)
        printf("MLE\n");
    else if (wa)
        printf("WA\n");
    else
        printf("AC\n");

    return 0;
}