// Absolute U
// Accepted
// Author @ Abuhena Rony
#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int number;
    for (int x = 1; x <= testCase; x++)
    {
        cin >> number;
        if (number > 0)
            cout << number << endl;
        else
            cout << -1 * number << endl;
    }
    return 0;
}