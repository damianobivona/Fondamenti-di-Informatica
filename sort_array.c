/*Scrivi un programma in C che chieda allʼutente di inserire un array di numeri interi. Il programma deve
poi ordinare lʼarray in ordine crescente. Implementa una funzione che riceva lʼarray e la sua
dimensione come parametri e lo ordini direttamente. Dopo lʼordinamento, stampa lʼarray ordinato.*/

#include <stdio.h>

void sort(int[], int);

int main() {
    int x;

    printf("Dimensione array: ");
    scanf("%d", &x);

    int a[x];
    for (int i = 0; i < x; i++) {
        printf("Inserisci un numero nell'array: ");
        scanf("%d", &a[i]);
    }

    sort(a, x);
}

void sort(int v[], int n) {
    int i, k;
    int temp;

    for (i = 0; i < n - 1; i++) {
        for (k = 0; k < n - 1 - i; k++) {
            if (v[k] > v[k + 1]) {
                temp = v[k];
                v[k] = v[k + 1];
                v[k + 1] = temp;
            }
        }
    }
    printf("Array in ordine crescente: \n");

    for (i = 0; i < n; i++) {
        printf(" %d ", v[i]);
    }

}
