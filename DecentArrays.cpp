// Decent Arrays
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    int arr[n];
    
    if (0 < n < 100)
    {
        // creating array
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        // testing array
        for (int y = 0; y < n; y++)
        {
            if (y == 0)
                count += 1;
            else if (0 < y < n)
            {
                if (arr[y] >= arr[y - 1])
                    count += 1;
            }
        }
        if (count == n)
        {
            cout << "Yes";
            //cout<<count;
        }
        else
        {
            cout << "No";
            //cout<<count;
        }
    }

    return 0;
}