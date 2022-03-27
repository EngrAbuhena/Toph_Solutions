// The Titan
// Accepted
// Author: Abuhena Rony
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int result = 0;
    int x = 1;
    while (x <= number)
    {
        result += (x * x);
        x++;
    }
    cout << result;
    return 0;
}
