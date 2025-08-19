// Fibonacci Series in C
#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci Series up to %d terms:\n", N);

    for (i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;

        printf("%d ", next);
    }

    return 0;
}
