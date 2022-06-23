// Nth Prime
//
// Author @ Abuhena Rony
#include <bits/stdc++.h>

int main()
{
    int num;
    scanf("%d", &num);
    int prime_numbers[] = {2, 3};
    int i = 3;
    int size = sizeof(prime_numbers) / sizeof(*prime_numbers);

    if (0 < num and num < 3)
        printf("%d\n", prime_numbers[num - 1]);
    else if (num > 2)
    {
        while (true)
        {
            i += 2; // as we only check the odd number, we don't need even numbers
            bool status = true;
            for (size_t j{2}; j < int(i / 2) + 1; ++j)
            {
                if (i % j == 0)
                {
                    status = false;
                    break;
                }
                else
                {
                    status = true;
                }
            }
            
            if (status)
            {
                prime_numbers[size] = i;
                size++;
            }
            else if (size == num)
            {
                break;
            }
        }
        printf("%d\n", prime_numbers[num - 1]);
        std::cout << prime_numbers;
    }
    else
        printf("Enter a valid number!");
    return 0;
}