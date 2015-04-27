#include <stdio.h>

int main(void) {

    // + - * /
    // % == != ^ >> << | &
    // && ||
    // ? :

    /* 

    puts("Hello, World!");
    printf("Hallo %d\n", 19);

    if (condition) {

    } else if (condiion) {

    } else {

    }
*/
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else { 
            printf("%d\n", i );
        }
    }

       // continue;
       // break;
    
/*
    while (condition) {
        
    }

    do {

    } while (condition);

    switch (value) {
        case 1:
            break;
        default:
            break;
    }
*/

}
