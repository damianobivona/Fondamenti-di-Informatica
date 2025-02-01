// Scrivere una funzione che, ricevuti in ingresso due numeri interi, restituisca il valore minimo

#include <stdio.h>

int min(int, int);

int main() {
int a, b;

    printf("Inserisci il primo valore:");
    scanf("%d", &a);

    printf("Inserisci il secondo valore:");
    scanf("%d", &b);

    if (a == b) {
        printf("I due valori sono uguali");

    } else printf("il valore più piccolo è: %d ", min(a, b));

}

int min(int x, int y) {

    int val;

    if ( x > y ) {
        val = y;
        return val;

    } if ( x < y ) {
        val = x;
        return val;

    }

}