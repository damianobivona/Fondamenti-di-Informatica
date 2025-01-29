#include <stdio.h>

// Scrivere un programma che prende in ingresso tre numeri interi e stampa a schermo il maggiore

// NOTE: opportuno dichiarare una variabile che assumerà il valore più alto dopo ogni check
// ed essendo che legge stringa per stringa, il suo valore cambierà se necessario
// ossia, se un altri tra a, b e c sarà maggiore ad ogni IF.

int main() {
    int a, b, c, max;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);

    printf("Inserisci il terzo valore: ");
    scanf("%d", &c);

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

    printf("Il numero col valore maggiore è %d", max);

}

    // CODICE ERRATO
/*
    // esercizio con if...else
    if (a > b) {
        if (a > c) {
            printf("A [%d] è maggiore di B [%d] e C [%d]", a, b, c);
        }
    }
    else if (b > c) {
        if (b > a) {
            printf("B [%d] è maggiore di A [%d] e C [%d]", b, a, c);
        }
    }
    else if (c > b) {
        if (c > a) {
            printf("C [%d] è maggiore di A [%d] e C [%d]", c, a, b);
        }
    }
}
*/
/*
//esercizio con AND
    //Non effettivamente funzionante: non tiene conto di possibili numeri ripetuti.
    if (b < a && c < a) {
        printf("Bravo è A");
    } else if (a < b && c < b) {
        printf("Bravo è B");
    } else printf("Bravo è C");
}
*/
