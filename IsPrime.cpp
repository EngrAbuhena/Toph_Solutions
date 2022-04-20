// Is Prime
// ACCEPTED
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void IsPrime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 0)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    int number = 0;
    cin >> number;
    if (0 < number < 100)
    {
        IsPrime(number);
    }
    return 0;
}