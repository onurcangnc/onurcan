#define CURRENTYEAR 2021
#include <stdio.h>

    int main (void) {
    
        int age;
        
        printf("Enter your age: ");
        
        scanf("%d", &age);
        
        printf("You are born in %d\n", CURRENTYEAR - age);
        
        
        
        return (0);
    }
