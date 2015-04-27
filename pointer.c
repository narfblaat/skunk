#include <stdio.h>

int main (void) {

    int x = 19;
    int y = 13;

    int* xp = &x;
    int* yp = &y;

    
    printf("%p\n%p\n", &x, &y);
    printf("%p\n%p\n", xp, yp);
    printf("%p\n%p\n", &xp, &yp);

}
