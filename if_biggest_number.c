#include <stdio.h>
// Scrivere un programma che prende in ingresso due numeri interi e stampa
// a schermo il maggiore oppure se i due numeri sono uguali

int main(void) {
    int a, b;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Il valore di [a] è il maggiore");
    }
    else if (b > a) {
        printf("Il valore di [b] è il maggiore");
    }
    else {
        printf("I valori inseriti sono uguali");
    }
}