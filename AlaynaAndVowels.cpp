// Alayna and Vowels
// ACCEPTED
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int counting_vowels(char w[])
{
    int count = 0;
    for (int i = 0; i < strlen(w); ++i)
    {
        if (w[i] == 'A' || w[i] == 'E' || w[i] == 'I' || w[i] == 'O' || w[i] == 'U' || w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
            count++;
    }
    return count;
}

int main()
{
    // char word[10000] = "Bangladesh";
    char word[10000];
    scanf("%s", word);
    printf("%d", counting_vowels(word));

    return 0;
}
