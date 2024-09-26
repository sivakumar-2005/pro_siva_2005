#include <stdio.h>
unsigned int factorial(unsigned int n) {
    int fact = 1, i;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}

