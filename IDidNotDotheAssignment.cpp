// I Did Not Do the Assignment
// ACCEPTED
// Author @ Abuhena Rony

#include <bits/stdc++.h>

int isPrime(int number) {
    int count = 0;
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}

int main() {
    int number;
    scanf("%d", &number);
    int isprime = isPrime(number);
    if (isprime == 1) {
        printf("NO PUNISHMENT\n");
    } else {
        for (int j = 0; j < number; ++j) {
            printf("I DID NOT DO THE ASSIGNMENT.\n");
        }
    }
    return 0;
}
