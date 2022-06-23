// Full Pyramid
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void makingPyramid(int n)
{
    int r = n;
    for (int x = 1; x <= r; x++) // loop for line
    {
        for (int y = 1; y < n; y++) // loop for printing space
        {
            cout << " ";
        }
        for (int z = 1; z <= x; z++) // loop for printing asterisks
        {
            if (z == 1)
                cout << "*";
            else
                cout << " *";
        }
        cout << "" << endl;
        n -= 1;
    }
}

int main()
{
    int number = 0;
    cin >> number;
    if (0 < number < 100)
    {
        makingPyramid(number);
    }
    return 0;
}