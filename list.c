#include <stdio.h>

int main(void) {
    
    char ypsilon = 'y';
    int quu = 'q';

    int arr[2] = { 0, 0 };

    char z = 121;
    char xrr[5] = { 113, 121, 121, 113, 113 };

    printf("%s\n", xrr);

    char zrr1[5] = { 113, 121, 121, 113, 0 };
    char zrr2[5] = { 'q', 'y', 'y', 'q', '\0' };

    char zrr3[] = "qyyq";

    puts(zrr3);

    printf("%p\n", &zrr3);
    printf("%p\n", &zrr3[0]);

    char* zrr4 = "qyyq";

    printf("%p\n", &zrr4);
    printf("%p\n", &zrr4[0]);

    /*
    printf("%d %d\n", arr[0], arr[1]);
    
    printf("%d\n", ypsilon);
    printf("%c\n", ypsilon);
    
    printf("%p\n", &ypsilon);
    
    printf("%d\n", quu);
    printf("%c\n", quu);
    
    printf("%p\n", &quu);
    */

}



