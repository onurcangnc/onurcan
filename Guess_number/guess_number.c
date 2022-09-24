#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int num, 
        tries, 
        guess = 0;
    
    srand(time(NULL));
    num = rand() % 100 + 1;

    printf("Guess my number game\n\n");

    do 
    {
        printf("Enter a guess number between 1 and 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else 
        {
            printf("\nCorrect! You got it in %d guesses !\n", tries);
        }
    
    }while (guess != num);
    
        return 0;

    }




