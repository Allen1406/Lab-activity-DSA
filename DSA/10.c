// Simple Calculator Program
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("What type of calculation would you like to perform?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 1) {
        printf("The sum of %d and %d is %d.\n", a, b, a + b);
    } else if(choice == 2) {
        printf("The difference between %d and %d is %d.\n", a, b, a - b);
    } else if(choice == 3) {
        printf("The product of %d and %d is %d.\n", a, b, a * b);
    } else if(choice == 4) {
        if(b != 0) {
            printf("The division of %d by %d is %.2f.\n", a, b, (float)a / b);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }