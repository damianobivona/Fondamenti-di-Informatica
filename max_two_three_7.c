//Replicare gli esercizi 2 e 3, questa volta restituendo il valore massimo

#include <stdio.h>

// maggiore tra i tre

int max(int, int, int);

int main() {

    int a, b, c;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);
    printf("Inserisci il terzo valore: ");
    scanf("%d", &c);

    printf("Il valore massimo tra %d, %d e %d è %d", a,b,c, max(a,b,c));
}

int max(int x, int y, int z) {

    int maxim;

    if ( z >= x && z >= y ) {
        maxim = z;
    } else if ( x >= z && x >= y ) {
        maxim = x;
    } else if ( y >= z && y >= x ) {
        maxim = y;
    }

    return maxim;
}