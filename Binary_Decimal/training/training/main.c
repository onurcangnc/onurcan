#include <stdio.h>
#include <math.h>

int main(void)
{
   int number, //input
       decimal, //output
       digit1, digit2, digit3, digit4, digit5, number1, number2; //digits
    
    //Getting the number from the user
    printf("Enter a binary number: ");
    scanf("%d", &number);
    
    
    digit1 = number % 10;
    number /= 10;
    
    digit2 = number % 10;
    number /= 10;
    
    digit3 = number % 10;
    number /= 10;
    
    digit4 = number % 10;
    number /= 10;
    
    digit5 = number % 10;
    number /= 10;
    
    decimal = digit5 * pow(2, 4) + digit4 * pow(2, 3) + digit3 * pow(2, 2) + digit2 * pow(2, 1) + digit1 * pow(2, 0);
    
    printf("Decimal equivalent : %d\n", decimal);
    
    number1 = decimal % 10;
    number2 = decimal / 10;
    
    printf("Digits of the decimal number : %d and %d\n", number2, number1);
    
    printf("Sum of its digits : %d\n", number2 + number1);
    
    return (0);
    
}
