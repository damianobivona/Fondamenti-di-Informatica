#include <stdio.h>
#include <stdlib.h> // per generale i numeri casuali - l'ho cercata su internet ovviamente
#include <time.h> // me lo ha detto un sito su internet e noi ci fidiamo

#define MAXGUESS 5

int caso(); // genera il numero causale
int guess(int); // gestisce i tentativi dell'utente

int main() {

    int number = caso() ; // dichiariamo la var. number e la assegnamo alla funzione caso
    printf("Ho pensato a un numero.\n");

    printf("%d \n", caso()); // stampa il numero casuale per controllo!

    guess(number); // richiamare la funzione
}

int caso() {

    srand(time(NULL));

    return rand() % 101; //IL RETURN MANNAGGIA A ME, VA MESSO QUANDO SI USANO LE FUNZIONI ALTRIMENTI FANNO QUELLO CHE VOGLIONO LORO
}

int guess(int number) {
    int tentativo;

    for (int t = 1; t <= MAXGUESS; t++) {
        printf("Insersci il numero che ho pensato: ");
        scanf("%d", &tentativo);

        if (t <= MAXGUESS) {
            if (tentativo < number) {
                printf("il numero a cui penso è PIU' GRANDE\n");

            } else if (tentativo > number) {
                printf("il numero a cui penso è PIU' PICCOLO\n");

            } else if (tentativo == number) {
                printf("Hai indovinato il numero in %d tentativi.\n", tentativo);

            }
        } else if (t == MAXGUESS) {
            printf("Hai esaurito i tentativi");
        }
    }
}