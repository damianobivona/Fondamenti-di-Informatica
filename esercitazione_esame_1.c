/*
Dato un array di interi, il programma:
    Ordina lʼarray (usando una semplice bubble sort).
    Calcola la mediana (se lʼarray ha dimensione dispari, la mediana è lʼelemento centrale; se pari, la
        media dei due elementi centrali).
    Trova la moda, cioè il valore che si ripete più frequentemente (in caso di parità viene considerato il
        primo riscontrato).
*/

#include <stdio.h>
void sort(int[], int);
float mediana(int[], int);
int moda(int[], int);

int main() {

    int n, k;
    printf("Array dimension: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("\nInsert number (%d / %d): ", i+1, n);
        scanf("%d", &numbers[i]);
    }

    sort(numbers, n);
    printf("\nArray in ordine crescente: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    mediana(numbers, n);
    printf("\n\nMediana degli elementi dell'array: %.2f", mediana(numbers, n));

    moda(numbers, n);
    printf("\n\nnumero di moda: %d", moda(numbers, n));
}

void sort(int numbers[], int n) {
    int i, k;
    int temp;

    for (i = 0; i < n - 1; i++) {
        for (k = 0; k < n - 1 - i; k++) {
            if (numbers[k] > numbers[k + 1]) {
                temp = numbers[k];
                numbers[k] = numbers[k + 1];
                numbers[k + 1] = temp;
            }
        }
    }

} //bubblesort

float mediana(int numbers[], int n)
{
    float mediana = 0;

    if (n % 2 != 0) {
        mediana = numbers[n / 2];
    } else {
        mediana = numbers[n / 2 - 1] + numbers[n / 2];
        mediana = mediana / 2;
    }
    return mediana;
}

int moda(int numbers[], int n) {
    int moda = numbers[0];
    int maxcount = 0;

    for (int k = 0; k < n; k++) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (numbers[k] == numbers[i]) {
                count++;
            }
        }

        if (count > maxcount) {
            maxcount = count;
            moda = numbers[k];
        }

    }

    return moda;



}