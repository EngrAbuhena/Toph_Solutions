// Mixed Fractions
// Accepted
// Author @ Abuhena Rony
#include <iostream>
using namespace std;

int main()
{
    int num1, num2; // numerator
    int den;        // denominator
    int rem;        // reminder
    cin >> num1 >> den;
    rem = num1 % den;
    num2 = num1 / den;
    cout << num2 << " " << rem << " " << den;
    return 0;
}