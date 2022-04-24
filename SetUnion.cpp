// Set Union
// Wrong Answer on test 02
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int merge_array(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    // copy first array elements into merged array
    for (int a = 0; a < n1; a++)
    {
        arr3[a] = arr1[a];
    }
    // copy second array elements into merged array
    for (int a = 0, b = n1; a < n2 && b < n3; a++, b++)
    {
        arr3[b] = arr2[a];
    }
    return arr3[n3];
}

int sort_array(int arr[], int n)
{
    // sort array in ascending order
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            int temp;
            if (arr[a] > arr[b])
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    return arr[n];
}

void display_array(int arr[], int n)
{
    // display array unique elements
    int a, b;
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < a; b++)
        {
            if (arr[a] == arr[b])
                break;
        }
        if (a == b and a == n - 1)
            printf("%d", arr[a]);
        if (a == b and a != n - 1)
            printf("%d ", arr[a]);
    }
    printf("\n");
}

int main()
{
    int num1, num2, num3, a;
    // read array size of first and second array from user
    scanf("%d %d", &num1, &num2);

    int array1[num1];
    int array2[num2];
    num3 = num1 + num2;
    int array3[num3];

    // read first array from user
    for (a = 0; a < num1; a++)
        scanf("%d", &array1[a]);

    // read second array from user
    for (a = 0; a < num2; a++)
        scanf("%d", &array2[a]);

    // merge array1 and array2 into array3
    merge_array(array1, array2, array3, num1, num2, num3);

    // sort merged array
    sort_array(array3, num3);

    // display merged array distinct elements
    display_array(array3, num3);
    return 0;
}