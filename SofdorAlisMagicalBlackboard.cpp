// Sofdor Ali's Magical Blackboard!
// ACCEPTED
// Author @ Abuhena Rony

#include <bits/stdc++.h>

int main() {
    long int testcases, num1, num2;
    scanf("%ld", &testcases);
    for (long int i = 1; i <= testcases; ++i) {
        scanf("%ld %ld", &num1, &num2);
        long int num3 = num1;
        for (long int j = 1; j < num2; ++j) {
            num3 = num3 + num1;
        }
        printf("%ld\n", num3);
    }
    return 0;
}
