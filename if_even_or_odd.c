#include <stdio.h>
int main() {
    // scrivere un programma che legge un numero intero in ingresso e stampa se è pari o dispari

    int number;

    printf("Inserisci un numero intero: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Il numero inserito è PARI");
    } else printf("Il numero inserito è DISPARI");
}
