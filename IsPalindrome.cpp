// Is Palindrome
// ACCEPTED
// Author @ Abuhena Rony
#include <iostream>

using namespace std;

void reverseStr(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

int main()
{
    string word;
    string word_rev;
    cin >> word;
    word_rev = word;
    reverseStr(word_rev);
    if (word == word_rev)
        cout << "Yes";
    else
        cout << "No";
}