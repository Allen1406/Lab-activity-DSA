// This code calculates the factorial of a number.
#include<stdio.h>
int main(){
    int fact=1, a;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        fact *= i;
    }
    printf("The factorial of %d is %d.\n", a, fact);
    return 0;
}
