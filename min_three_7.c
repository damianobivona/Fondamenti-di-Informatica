// Scrivere una funzione che, ricevuti in ingresso tre numeri interi, restituisca il valore minimo

#include <stdio.h>

int min(int, int, int);

int main() {

    int a, b, c;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);
    printf("Inserisci il terzo valore: ");
    scanf("%d", &c);

    printf("Il valore minimo tra %d, %d e %d è %d", a,b,c, min(a,b,c));
}

int min(int x, int y, int z) {

    int minimum;

    if ( z <= x && z <= y ) {
        minimum = z;
    } else if ( x <= z && x <= y ) {
        minimum = x;
    } else if ( y <= z && y <= x ) {
        minimum = y;
    }

    return minimum;
}
