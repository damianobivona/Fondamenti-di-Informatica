// Scrivi un programma che chiede all'utente di inserire un numero
// e stampa la tabellina di quel numero da 1 a 10.

#include <stdio.h>

void table(int);

int main() {
    int n;

    printf("Inserisci il numero: ");
    scanf("%d", &n);

    table(n);
}

void table(int x) { // void e non int perché la funzione non restituisce un valore, ma stampa e basta

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", x, i, x * i);
    }
    // non serve un return perchè la funzione ha solo il compito di stampare
}