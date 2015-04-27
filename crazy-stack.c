#include <stdio.h>

int* alice(int zahl) {
    int x = zahl;
    return &x; // variable vom lokalen stack frame wird zurückgegeben!! Niemals tun!
}

int* bob(int graf) {
    int y = graf;
    return &y; // address of stack memory associated with local variable 'y' returned [-Wreturn-stack-address]
}

int main (void) {
    
    int a = 0;
    int b = 19;
    
    int* m = alice(a);

    printf("%p\n%p\n%p\n", &a, &b, &m);

    printf("%d\n", *m);
    
    int* n = bob(b);

    printf("%d\n", *m);
    printf("%d\n", *n);

}

