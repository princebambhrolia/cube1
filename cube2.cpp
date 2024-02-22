#include <stdio.h>

int isDivisibleBy3And5(int num) {
    
}

int main() {
    int number;
 
    printf("Enter any number: ");
    scanf("%d", &number);

   
    if (isDivisibleBy3And5(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    return 0;
}

