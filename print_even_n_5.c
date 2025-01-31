// scrivere un programma che chiede all'utente di inserire un numero intero positivo N
// e stampa i primi N numeri pari.

#include <stdio.h>

int even(int);

int main() {
    int n;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    printf("I numeri pari sono: ");
    even(n); // richiamo la funzione even
}

int even(int x) {
    int counter = 0; // necessaria altrimenti stamperebbe i numeri pari fino a N, e non i primi N numeri pari

    for (int i = 0; counter < x; i += 2) { // "counter < x" altrimenti effettua il ciclo una volta in più
        printf(" %d ", i);
        counter++;
    }
    return 0;
}
