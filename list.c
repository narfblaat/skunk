#include <stdio.h>

// In C muss eine Funktion deklarier werden bevor sie benutzt werden kann
// (deswegen steht die VOR main und nicht HINTER main, da sie IN main benutzt wird)
void swap(int* a, int* b) {
    // a und b sind POINTER

    // c ist eine ZAHL
    int c = *a; // unäres asterisk -> dereferenzierungs operator
    *a = *b; // Der Wert an der Adresse des POINTERS b wird an die Adresse des POINTERS a geschrieben
    *b = c; // Der Wert in der Variable c (eine ZAHL) wird an die Adresse des POINTERS b geschrieben
}

int main (void) {

    int x = 19;
    int y = 13;

    printf("%d %d\n", x, y);

    swap(&x, &y); // Die Adressen der Variablen x und y werden als POINTER übergeben

    printf("%d %d\n", x, y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    // mind-boggling!!
}

