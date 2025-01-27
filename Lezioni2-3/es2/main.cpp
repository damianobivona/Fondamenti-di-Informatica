#include <iostream>

int main() {
    //Scrivere un programma che calcola e stampa le 4 operazioni aritmetiche dopo aver chiesto in ingresso (da tastiera) di due numeri interi
   int a, b;

    printf("inserisci il primo numero intero: ");
    scanf("%d", &a);
    printf("inserisci il secondo numero intero: ");
    scanf("%d", &b);

    printf("Ecco le tue operazioni:\n");
    printf("La somma è uguale a: %d\n", a + b);
    printf("La differenza è uguale a: %d\n", a - b);
    printf("Il prodotto è uguale a: %d\n", a * b);
    printf("La divisione è uguale a: %d\n", a / b);
    printf("Potrebbe esserci un resto, che è uguale a: %d\n", a % b);
}
