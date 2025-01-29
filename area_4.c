/* Scrivere un programma che calcola e stampa lʼarea di un rettangolo dopo aver chiesto
 in ingresso (da tastiera) la base e lʼaltezza (due numeri interi) */

#include <stdio.h>

int area(int, int);

int main() {
    int length = 0;
    int width = 0;

    printf("Area: %d\n", area(length, width));
}

int area(int l, int w) {

    printf("Inserisci il valore della base: ");
    scanf("%d", &l);

    printf("Inserisci il valore dell'altezza: ");
    scanf("%d", &w);

    int a = l * w;

    return a;
}