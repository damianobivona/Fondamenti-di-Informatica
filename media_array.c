// Scrivi una funzione che calcoli la media dei valori presenti in un array di numeri interi.

#include <stdio.h>

int media(int[], int, int);

int main() {

    int n;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    int a[n];
    for ( int i = 0; i < n; i++) {
        printf("Inserisci un valore: ");
        scanf("%d", &a[i]);
    }

    printf("La media è: %d", media(a, n, media));

}

// Scrivi una funzione che calcoli la media dei valori presenti in un array di numeri interi.

int media(int v[], int k, int media) {
    int sum = 0;

    for ( int i = 0; i < k; i++ ) {
        sum += v[i];
    }
    media = sum / k;
    return media;
}