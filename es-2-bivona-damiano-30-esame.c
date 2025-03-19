/*Esercizio 2: Somma di due array
Si realizzi un programma in C che consenta allʼutente di inserire due insiemi di numeri interi, ciascuno
costituito da 5 elementi. I due insiemi dovranno essere memorizzati in due array distinti.
Il programma dovrà poi calcolare un terzo array, in cui ogni elemento sia ottenuto sommando i valori
corrispondenti dei primi due array. Per eseguire questa operazione, si deve implementare una funzione che
riceva in input i due array iniziali e restituisca lʼarray risultante dalla somma.
Infine, il programma dovrà stampare il terzo array, contenente i risultati della somma.*/

#include <stdio.h>

#define MAXARRAY 5

int sum(int[], int[], int[]);

int main() {

    int arr1[MAXARRAY];

    for (int i = 0; i < MAXARRAY; i++) {
        printf("Put a number into the first array: ");
        scanf("%d", &arr1[i]);
    }

    int arr2[MAXARRAY];
    for (int i = 0; i < MAXARRAY; i++) {
        printf("Put a number into the second array: ");
        scanf("%d", &arr2[i]);
    }

    int arr3[MAXARRAY];
    sum(arr1, arr2, arr3);

    for (int i = 0; i < MAXARRAY; i++) {
        printf("%d ", arr3[i]);
    }

}

int sum(int arr1[], int arr2[], int arr3[]) {

    for (int i = 0; i < MAXARRAY; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    return arr3[MAXARRAY];
}