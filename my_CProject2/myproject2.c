#define _CRT_SECURE_NO_WARNINGS
/* Mathematical Calculations Program */
#include <stdio.h>

int main(void) {

    double input1, input2;

    printf("Give first number: ");
    scanf("%lf", &input1);

    printf("\nGive second number: ");
    scanf("%lf", &input2);    
    
    printf("\nSum of numbers = %.0lf", input1 + input2);
    printf("\n\nMultiplication = %.0lf", input1 * input2);
    printf("\n\nFirst number divide the second one = %.0lf", input1 / input2);
    printf("\n\nSecond number divide the first one = %.2lf", input2 / input1);
    printf("\n\nDifference of Input 1 and Input 2  = %.0lf", input1 - input2);
    printf("\n\nDifference of Input 2 and Input 1  = %.0lf\n\n", input2 - input1);
    
    
    return (0);
    
    }