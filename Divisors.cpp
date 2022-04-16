// Divisors
// ACCEPTED
// Author @ Abuhena Rony
#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int divisor = 1;
    cin >> number;
    if (0 < number < 100)
    {
        for (int x = 1; x < number + 1; x++)
        {
            if (number % x == 0)
                cout << x << endl;
        }
    }
    return 0;
}