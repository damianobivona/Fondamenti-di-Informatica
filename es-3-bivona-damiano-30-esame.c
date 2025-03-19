/* Esercizio 3: Trova l'indice dell'elemento più vicino a un valore dato

Scrivere un programma in C che permetta allʼutente di inserire N numeri interi e di memorizzarli in un array.
Dopo aver ricevuto i dati, il programma dovrà chiedere allʼutente di inserire un numero di riferimento.
Successivamente, si dovrà implementare una funzione che analizzi lʼarray e restituisca lʼindice dellʼelemento
più vicino al valore di riferimento, calcolando la differenza assoluta tra ogni elemento e il numero indicato.
Nel caso in cui ci siano più elementi alla stessa distanza dal numero di riferimento, la funzione dovrà
restituire lʼindice del primo elemento trovato.
Alla fine dellʼelaborazione, il programma dovrà stampare il valore dellʼelemento più vicino e la sua posizione
nellʼarray.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ref(int[], int, int);

int main() {
  int n;
    printf("Array dimension: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Put a number into the array: ");
        scanf("%d", &array[i]);
    }

    int x;
    printf("Choose a number: ");
    scanf("%d", &x);



    ref(array, n, x);
    int val = ref(array, n, x);

    printf("indice: %d - valore: %d", ref(array, n, x), array[val]); //stampa la posizione (inserire testo)
}

int ref(int array[], int n, int x) {

    int diff = abs(array[0] - x);
    int val = 0;


    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            return i;
        }
        for (int j = 1; j < n; j++) {
            int diffass = abs(array[j] - x);

            if (diffass < diff) {
                diff = diffass;
                val = j;
            }
        }
    }
    return val;
}