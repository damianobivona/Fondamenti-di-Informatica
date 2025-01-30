// Scrivere un programma che prende in ingresso due numeri interi e stampa a schermo il maggiore
// oppure se i due numeri sono uguali

// Versione con le funzioni

#include <stdio.h>

int big(int, int);

int main() {
    int x, y;

    printf("Inserisci il primo numero intero [a]: ");
    scanf("%d", &x);
    printf("Inserisci il secondo numero intero [b]: ");
    scanf("%d", &y);

    big(x, y);
}

int big(int a, int b) {

    if (a > b) {
        printf("Il valore di [a] è il maggiore");
    }
    else if (b > a) {
        printf("Il valore di [b] è il maggiore");
    }
    else {
        printf("I valori inseriti sono uguali");
    }

    return 0;
}