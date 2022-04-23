// Konami Code
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

using namespace std;

int count_substring(string str, string substring)
{
    int count = 0;
    int len = str.length();
    int len2 = substring.length();
    for (int i = 0; i < len; i++)
    {
        if (str == "")
            return 0;
        else
        {
            if (str.substr(i, len2) == substring)
                count++;
        }
    }

    return count;
}

int main()
{
    string str;
    string sub = "UUDDLRLRBA";
    cin >> str;
    printf("%d", count_substring(str, sub));
    return 0;
}