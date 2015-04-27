#include <stdio.h>

int main (void) {
    
    int arr[2] = { 17, 267 };

    printf("%p\n", &arr); // unary / unärer operator & -> address-of operator
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);

    // virtual memory -> addressen ändern sich immer wieder
    // 
    // zuordnung von hardware addresses (real address) und virtual addresses
    // wird durch MMU (memory management unit) gemacht
}
