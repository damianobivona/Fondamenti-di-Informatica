/* Scrivere una funzione che riceva in ingresso due numeri interi a e b (b > 0)
e restituisca il risultato della potenza a^b */

#include <stdio.h>

int exp(int, int);

int main() {
    int a, b;

    printf("Inserisci il primo numero (la base): ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero (l'esponente), maggiore di zero: ");
    scanf("%d", &b);

    if (b <= 0) {
        printf("Errore, esponente negativo");
    } else {
         printf("%d elevato %d è uguale a: %d", a, b, exp(a, b));
    }
}

int exp(int base, int exponent) {

    int result = 1;

    for (int i = 1; i <= exponent; i++) {

        result *= base;

    } return result;
}