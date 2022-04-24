// Count The Mines
// Wrong answer on test 2
// Author @ Abuhena Rony
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char mine_arr[40][40];
    int n = 4;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char temp = 0;
            scanf("%c", &temp);
            if (temp == '\n' or temp == ' ' or temp == '\t')
                j--;
            else
                mine_arr[i][j] = temp;
        }
    }
    // display mine array for debugging
    //    printf("\n");
    //    for (int i = 0; i < n; i++) {
    //        for (int j = 0; j < n; j++)
    //            printf("%d %d => %c\n", i, j, mine_arr[i][j]);
    //    }
    //    printf("\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (mine_arr[row][col] == 'm')
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}