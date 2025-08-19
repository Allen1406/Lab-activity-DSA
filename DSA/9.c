//Convert Celsius to Fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
