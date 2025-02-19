/*Scrivi un programma in C che consenta allʼutente di inserire un array di numeri interi.
Successivamente, implementa una funzione che crei un nuovo array contenente gli elementi
dellʼarray originale in ordine inverso. La funzione deve ricevere come parametri lʼarray originale e il
numero di elementi. Alla fine, stampa sia lʼarray originale che quello invertito.*/
#include <stdio.h>

int opposite(int[], int[], int);

int main() {
    int x;

    printf("inserisci la grandezza dell'array: ");
    scanf("%d", &x);

    int a[x];
    for (int i = 0; i < x; i++) {
        printf("Inserisci un numero interno dell'array: ");
        scanf("%d", &a[i]);
    }

    printf("\nArray nell'ordine originale: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", a[i]);
    }

    int b[x];
    opposite(a, b, x);
    printf("Array nell'ordine inverso: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", b[i]);
    }



}

int opposite(int dritto[], int inv[], int n) {


    for (int j = n - 1, i = 0; j >= 0; j--, i++) {
        inv[j] = dritto[i];
    }
}
