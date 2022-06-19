// Big Factorials
// Accepted
// Author @ Abuhena Rony
#include <iostream>
using namespace std;

long long factorial(long long n)
{
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1)) % 10000;
}

int main()
{
    int number = 0;
    long long fourDigitsResult = 0;
    cin >> number;
    if (0 < number < 1000)
    {
        fourDigitsResult = factorial(number);
        cout << fourDigitsResult;
    }

    return 0;
}