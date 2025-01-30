#include <stdio.h>

// Scrivere un programma che prende in ingresso tre numeri interi e stampa a schermo il maggiore
// versione con una funzione.

int controll(int, int, int);

int main() {
    int a, b, c, max = 0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);

    printf("Inserisci il terzo valore: ");
    scanf("%d", &c);

    max = controll(a, b, c);

    printf("Hai inserito [%d], [%d] e [%d] \n", a, b, c);
    printf("Il valore più grande è: %d", max);

}

int controll(int a, int b, int c) {

    int max;

    if (a >= b) {
        if (a >= c) {
            max = a;
        }
        else {
            max = c;
        }
    }
    else {
        if ( b >= c ) {
            max = b;
        }
        else {
            max = c;
        }
    }
    return max;
}
