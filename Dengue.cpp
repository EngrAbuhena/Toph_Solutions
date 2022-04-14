// Dengue
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <string>

using namespace std;

int totalMoshaCount(string str)
{
    int sum = 0;        // summation of all mosha
    string temp = "";   // a temporary string
    for (char ch : str) // find every character from the string
    {
        if (isdigit(ch)) // find if the character is a number
            temp += ch;  // put the number into the temporary string
        else             // if the character of the string is not a number
        {
            sum += atoi(temp.c_str()); // increment sum by the number found earlier
            temp = "";                 // reset temporary string to empty
        }
    }
    return sum + atoi(temp.c_str());
}

int main()
{
    string moshaKilledByDay;
    getline(cin, moshaKilledByDay);            // take input
    cout << totalMoshaCount(moshaKilledByDay); // show output taking return value from totalMoshaCount function
    return 0;
}