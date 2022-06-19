// Better Passwords
// Accepted
// Author @ Abuhena Rony
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string make_better_password(string pass)
{
    int len = pass.length();
    char s = '$';
    char i = '!';
    char o1 = '(';
    char o2 = ')';
    //  first character should be uppercase
    // password[0] = (char)toupper(password[0]);
    if (pass[0] >= 'a' and pass[0] <= 'z')
        pass[0] = pass[0] + 'A' - 'a';
    for (int a = 0; a < len; a++)
    {
        if (pass[a] == 'o')
            pass.append(" ");
    }

    // replace characters

    for (int x = 0; x < len; x++)
    {
        if (pass[x] == 's')
            pass[x] = s;
        else if (pass[x] == 'i')
            pass[x] = i;
        else if (pass[x] == 'o')
        {
            len = len + 1;
            for (int z = len; z > x + 1; z--)
            {
                pass[z] = pass[z - 1];
            }
            pass[x] = o1;
            pass[x + 1] = o2;
        }
        else
            continue;
    }
    pass.append(".");
    return pass;
}

int main()
{
    string password;
    getline(cin, password);
    //  cout<<password.length();
    if (0 < password.length() < 16)
    {
        cout << make_better_password(password);
    }
    return 0;
}