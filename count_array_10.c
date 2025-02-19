/*Realizza un programma che chieda allʼutente di inserire un array di numeri interi e un valore specifico
da cercare allʼinterno dellʼarray. Scrivi una funzione che conti quante volte il valore inserito dallʼutente
compare nellʼarray. La funzione dovrà restituire il numero di occorrenze trovate. Alla fine, stampa il
risultato.*/

#include <stdio.h>
#define MAXVAL 5

int count(int[], int);

int main() {
    int value[MAXVAL];

    for (int i = 0; i < MAXVAL; i++) {
        printf("Inserisci un numero interno dell'array: ");
        scanf("%d", &value[i]);
    }

    int s = 0;
    printf("Il numero da te cercato compare per %d volte", count(value, s));

}

int count(int value[], int search) {
    int n = 0;

    printf("Che numero vuoi cercare?: ");
    scanf("%d", &search);

    for (int i = 0; i <= MAXVAL; i++) {
        if (value[i] == search) {
            n++;
        }
    }
     return n;
}
