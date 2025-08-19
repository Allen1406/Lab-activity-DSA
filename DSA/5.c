//Check if a number is prime
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % a == 0 && a % 1 == 0){
        printf("The number is prime.\n");
    }
    else{
        printf("The number is not prime.\n");
    }