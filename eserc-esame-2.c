/*
Scrivi un programma in C che:
    Chieda all'utente di inserire N numeri interi.
    Memorizzi questi numeri in un array.
    Implementi la funzione:
        float findAverage(int arr[], int n): per calcolare la media dei numeri.
        float sumEven(int arr[], int n): per calcolare la somma dei soli numeri pari.
        float sumOdd(int arr[], int n): per calcolare la somma dei soli numeri dispari.
Nel main, gestisca direttamente la lettura e la stampa dei numeri.
*/
#include <stdio.h>

float findAverage(int arr[], int n);
float sumEven(int arr[], int n);
float sumOdd(int arr[], int n);

int main(void) {
    int n;

    printf("Dimensione array: ");
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++) {
        printf("Inserisci un valore nell'Array[%d]: ", i);
        scanf("%f", &arr[i]);
    }

    findAverage(arr, n);
    printf("Media: %f", findAverage(arr, n));

}

float findAverage(int arr[], int n) { // calcolare media dei numeri -> somma di tutti i valori / grandezza array
    int sum = 0;
    int aveage = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = sum / 2;

    return average;
}