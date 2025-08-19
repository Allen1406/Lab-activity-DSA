// Sum of First N Natural Numbers
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Output the result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
