/* Crea un programma che permetta allʼutente di inserire un array di numeri interi e un valore intero da
cercare. Implementa una funzione che restituisca la posizione della prima occorrenza del valore
nellʼarray. Se il valore non è presente, la funzione deve restituire -1. Infine, il programma principale
dovrà stampare la posizione trovata o un messaggio indicante che il valore non è stato trovato. */

#include <stdio.h>

int search(int[], int, int);

int main() {
    int x;

    printf("Inserisci la dimensione dell'array");
    scanf("%d", &x);

    int a[x];

    for (int i = 0; i < x; i++) {
        printf("Inserisci un numero interno dell'array: ");
        scanf("%d", &a[i]);
    }

    int y;
    printf("Inserisci un numero da cercare: ");
    scanf("%d", &y);

    printf(" %d ", search(a, x, y));

}

int search(int a[], int x, int y) {

    for (int i = 0; i < x; i++) {
        if (y == a[i]) {
            int p = i+1;
            return p;
        }
    } return -1;
}