// Fibonacci Numbers
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 or n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int number = 0;
    int result = 0;
    cin >> number;
    if (0 < number < 50)
    {
        result = fibonacci(number);
    }
    cout << result;
    return 0;
}