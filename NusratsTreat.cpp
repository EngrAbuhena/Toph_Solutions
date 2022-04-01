// Nusrat's Treat
// Accepted
// Author: Abuhena Rony

#include <iostream>
using namespace std;

int chocolateCount(int sp)
{
    if (sp == 1)
        return sp;
    else if (sp == 0)
        return 0;
    return sp + chocolateCount(sp - 1);
}

int main()
{
    int solvedProblems;
    cin >> solvedProblems;
    if (0 <= solvedProblems <= 12)
        cout << chocolateCount(solvedProblems);
    return 0;
}