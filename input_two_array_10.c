/*Realizza un programma che consenta di leggere da input un array di numeri interi, la cui lunghezza
viene specificata dallʼutente. Implementa due funzioni, una per determinare il valore massimo
dellʼarray e unʼaltra per individuare il valore minimo. Entrambe le funzioni devono ricevere come
parametri lʼarray e il numero di elementi. Dopo aver trovato massimo e minimo, stampa i due valori.*/

#include <stdio.h>

int maxarray(int[], int);
int minarray(int[], int);

int main() {
    int n;

    // utente inserisce la grandezza dell'array
    printf("inserisci la grandezza dell'array: ");
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        printf("inserisci un numero: ");
        scanf("%d", &arr1[i]);
    }

    printf("Num Max: %d", maxarray(arr1, n));
    printf("\nNum Min: %d", minarray(arr1, n));
}

int maxarray(int arrmax[], int a) {
    int max = arrmax[0];

    for (int i = 1; i < a; i++) {         // "1" è il secondo valore dell'array; "n" è la grandezza dell'array
        if (arrmax[i] > max) {
            max = arrmax[i];
        }
    }
    return max;
}

int minarray(int arrmin[], int b) {
    int min = arrmin[0];

    for (int i = 1; i < b; i++) {         // "1" è il secondo valore dell'array; "n" è la grandezza dell'array
        if (arrmin[i] < min) {
            min = arrmin[i];
        }
    }
    return min;
}

