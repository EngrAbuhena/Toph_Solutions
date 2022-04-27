// ICPC Is Coming in Hot!
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>
using namespace std;

// maximum character counter function
void max_char_count(string number)
{
    int max = 0;
    char pointer;
    for (int x = 0; x < number.length(); x++)
    {
        // calling std::count() function
        int counter = count(number.begin(), number.end(), number[x]);
        if (counter > max)
        {
            max = counter;       // maximum character counter will store here
            pointer = number[x]; // pick the character from the string
        }
    }
    cout << pointer << "\n"; // print the result
}

// main function
int main()
{
    string big_number; // declear the variable as a string
    cin >> big_number; // taking input from user
    //    printf("%s",number);
    max_char_count(big_number); // calling the function
    return 0;
}