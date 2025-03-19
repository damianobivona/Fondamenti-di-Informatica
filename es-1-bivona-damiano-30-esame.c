
/* Esercizio 1: Sostituzione elementi in un array

Si scriva un programma in C che permetta allʼutente di inserire N numeri interi e di memorizzarli in un array.
Successivamente, il programma deve chiedere allʼutente di specificare un numero tra quelli inseriti e un
nuovo valore con cui sostituirlo.
Per effettuare questa operazione, si deve implementare una funzione che riceva in input lʼarray, il numero da
sostituire e il nuovo valore. La funzione dovrà scorrere lʼarray e sostituire ogni occorrenza del numero
specificato con il valore indicato dallʼutente.
Al termine dellʼelaborazione, il programma stamperà lʼarray modificato.
*/

#include <stdio.h>

int replace(int[], int, int, int);

int main() {
    int n;
    printf("Array dimension: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Put a number into the array: ");
        scanf("%d", &array[i]);
    }

    int x, y;

    replace(array, n, x, y);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int replace(int array[], int n, int x, int y) {

    x = 0;
    y = 0;

    printf("Choose a number: ");
    scanf("%d", &x);

    printf("Replace it with...\nWrite it here: ");
    scanf("%d", &y);


    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            x = y;
            array[i] = y;
        }
    } return array[n];
}