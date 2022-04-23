// Facebook Reacts
// Accepted
// Author @ Abuhena Rony
#include <bits/stdc++.h>

using namespace std;

void fb_reaction(string input)
{
    string like = "(y)";
    string love = "<3";
    string care = "^_<3_^";
    string haha = ":p";
    string wow = ":O";
    string sad = ":'(";
    string angry = ">_<";

    if (input == "Like")
        cout << like;
    if (input == "Love")
        cout << love;
    if (input == "Care")
        cout << care;
    if (input == "Haha")
        cout << haha;
    if (input == "Wow")
        cout << wow;
    if (input == "Sad")
        cout << sad;
    if (input == "Angry")
        cout << angry;
}

int main()
{
    string input;
    cin >> input;
    fb_reaction(input);
    return 0;
}