// Little Subarray Sum
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    if (0 < n < 100 and 0 <= a < b < n)
    {
        int arr[n];
        int sumOfArray = 0;
        // cout<<"input array: ";
        for (int x = 0; x <= n; x++)
        {
            cin >> arr[x];
        }
        // sum of sub-array elements
        for (int y = a; y <= b; y++)
        {
            sumOfArray += arr[y];
        }
        cout << sumOfArray;
    }
    return 0;
}