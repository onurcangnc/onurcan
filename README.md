#define _CRT_SECURE_NO_WARNINGS
#define NUTELLA_PER_GRAM 5.42
#define BREAD_PER_GRAM 3
#define EGG_PER_GRAM 2
#define OLİVE_GRAM 4
#define CHEESE_GRAM 113
/* Calculate your daily calory in Breakfast */
#include <stdio.h>

int main(void) {

    int quantity3, quantity2, quantity1, total, quantity, quantity4;

    printf("How many grams did you consume nutella ? :\n");
    scanf("%d", &quantity);

    printf("How many grams did you eat eggs ? :\n");
    scanf("%d", &quantity1);

    printf("How many grams olives did you consume ? :\n");
    scanf("%d", &quantity2);

    printf("How many grams slice of breads did you eat ? :\n");
    scanf("%d", &quantity3);


    total = (NUTELLA_PER_GRAM * quantity) + (EGG_PER_GRAM * quantity1) + (OLİVE_GRAM * quantity2) + (BREAD_PER_GRAM * quantity3);

    printf("Total of calories is %d", total);

}

