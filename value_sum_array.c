/*Scrivi una funzione che sommi elemento per elemento due array della stessa dimensione e salvi il
risultato in un terzo array.*/

#include <stdio.h>

void sum_array(int[], int[], int[], int);

int main() {

    int n;
    printf("Dimensione array: ");
    scanf("%d", &n);
    int c[n];

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Inserisci valori nel primo array: ");
        scanf("%d", &a[i]);
    }

    int b[n];
    for (int k = 0; k < n; k++) {
        printf("Inserisci valori nel secondo array: ");
        scanf("%d", &b[k]);
    }

    sum_array(a, b, c, n);

    printf("Array 3:");
    for (int i = 0; i < n; i++) {
        printf(" %d ", c[i]);
    }
}

void sum_array(int x[], int y[], int z[], int n) {

    for ( int i = 0; i < n; i++) {
        z[i] = x[i] + y[i];
    }
}