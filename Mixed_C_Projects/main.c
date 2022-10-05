//Calculate the amount of year required for insulting the Turkish president punishment.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double amountofpunishment, yes = 1, entirepunishment, extra;
    
    printf("Welcome the extra punishment program for people insulting president of Turkey\n\n We are going to calculate the amount of Insulting Punishment of Turkish President by year \n\n");
    printf("The program calculates the punishment increasement of Insulting Punishment of Turkish President \n\n");
    printf("Did you commit the crime publicly ? \n\n Type 1 for yes or 0 for no and press 'Enter': ");
    scanf("%lf", &yes);
    
    if (yes == 1) {
        printf("\n\n How many years did you receive imprisonment from Penal Court of First Instance ? \n\n Enter the value that is required to be between 1-4 by year:");
        scanf("%lf", &amountofpunishment);
        
        if (amountofpunishment > 4) {
            printf("According the Turkish Punishment Law, Insulting of Turkish President Punishment does not cover your number that is written by year ,so The program has ended. automatically");
        } else if (amountofpunishment == 0) {
            printf("Punishment needed ,but you have written 0 and program will close.");
        } else {
            extra = amountofpunishment / 6;
            entirepunishment = extra + amountofpunishment;
            printf("\n\n You will receive extra %0.1lf year.\n\n Your total punishment will be %0.1lf year: \n\n", extra, entirepunishment);
        }
    } else {
        printf("According to Turkish Punishment Law, you will not receive extra punishment.");
    }
    
    return 0;

}
    
