#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

     printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");

    return 0;
}
