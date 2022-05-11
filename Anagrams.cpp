// Anagrams
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.[1] For example, the word anagram itself can be rearranged into nag a ram, also the word binary into brainy and the word adobe into abode.
// Accepted
// Author @ Abuhena Rony

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word1[100];
    char word2[100];
    int match = 0;
    cin >> word1;
    cin >> word2;

    if (strlen(word1) == strlen(word2))
    {
        for (size_t x{}; x < strlen(word1); x++)
        {
            for (size_t y{}; y < strlen(word2); y++)
            {
                if (word1[x] == word2[y])
                    match++;
            }
        }
        if (match == strlen(word1) and match == strlen(word2))
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        cout << "No";
    }
    return 0;
}