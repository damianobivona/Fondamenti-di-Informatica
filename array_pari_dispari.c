/*Scrivi una funzione che verifichi se in un array gli elementi pari e dispari sono alternati.*/

#include <stdio.h>

int controll(int[], int);

int main() {

    int n;
    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        printf("Inserisci elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    if (controll(v, n)) {
        printf("I numeri sono alternati");
    } else {
        printf("I numeri non sono alternati");
    }
}

int controll(int v[], int x) {
    for ( int i = 0; i < x - 1; i++) {
        if (v[i] % 2 == v[i + 1] % 2) { // controlla se sono consecutivi due pari
            return 0;
        }
    } return 1;
}
