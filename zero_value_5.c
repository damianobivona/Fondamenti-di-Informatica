// Data una sequenza di valori interi terminante col valore 0 stampare i tre valori massimi.

#include <stdio.h>

// VERSIONE FUNZIONANTE CON SOLO FUNZIONE MAIN

/* int main() {

    int n;
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;

    printf("-------- Inserisci un numero\n[inserisci 0 per terminare e scoprire quali sono i valori più alti che hai inserito]: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > max1) {
            max3 = max2;
            max2 = max1;
            max1 = n;
        }
        else if (n > max2) {
            max3 = max2;
            max2 = n;
        }
        else if (n > max3) {
            max3 = n;
        }

        printf("continua a inserire (0 per scoprire i tre valori più alti!): ");
        scanf("%d", &n);
    }

    printf("I valori più alti che hai inserito sono %d, %d e %d", max1, max2, max3);

}
*/

// VERSIONE CON PIU' FUNZIONI -> NON FUNZIONA

int value(int, int, int);

int main() {

    int a , b , c ;

    value(&a, &b, &c);
    printf("I valori più alti che hai inserito sono %d, %d e %d", a, b, c);

}

int value(int max1, int max2, int max3) {

    int n;
    max1 = 0;
    max2 = 0;
    max3 = 0;

    printf("-------Inserisci un numero\n[inserisci 0 per terminare e scoprire quali sono i valori più alti che hai inserito]: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > max1) {
            max3 = max2;
            max2 = max1;
            max1 = n;
        }
        else if (n > max2) {
            max3 = max2;
            max2 = n;
        }
        else if (n > max3) {
            max3 = n;
        }

        printf("continua a inserire (0 per scoprire i tre valori più alti!): ");
        scanf("%d", &n);
    }
}
