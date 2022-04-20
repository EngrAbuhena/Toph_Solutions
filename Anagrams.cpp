// Anagrams
// ACCEPTED
// Author @ Abuhena Rony
#include <iostream>
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
        for (int x = 0; x < strlen(word1); x++)
        {
            for (int y = 0; y < strlen(word2); y++)
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