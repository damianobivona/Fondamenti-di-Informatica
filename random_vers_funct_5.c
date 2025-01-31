// Generare un numero a caso compreso tra 1-100 e chiedere allʼutente un numero fino a
// quando non è uguale a quello generato casualmente. Dire ogni volta se il numero immesso è > o < di quello iniziale.
// Indicare anche il numero di tentativi.

#include <stdio.h>
#include <stdlib.h> // per generale i numeri casuali - l'ho cercata su internet ovviamente
#include <time.h> // me lo ha detto un sito su internet e noi ci fidiamo

int caso(); // genera il numero causale
int guess(int); // gestisce i tentativi dell'utente

int main() {

    int number = caso() ;
    printf("Ho pensato a un numero.\n");

    printf("%d \n", caso());

    int tentativo = guess(number);
    printf("Hai indovinato il numero in %d tentativi.\n", tentativo);

}

int caso() {

    srand(time(NULL));

    return rand() % 101; //IL RETURN MANNAGGIA A ME, VA MESSO QUANDO SI USANO LE FUNZIONI ALTRIMENTI FANNO QUELLO CHE VOGLIONO LORO
}

int guess(int number) {

    int tentativo;
    int t = 0;

    do {

        printf("Insersci il numero che ho pensato: ");
        scanf("%d", &tentativo);

        if (tentativo < number) {
            printf("Nope... il numero a cui penso è PIU' GRANDE\n");

        } else if (tentativo > number) {
            printf("meno meno... il numero a cui penso è PIU' PICCOLO\n");

        } else if (tentativo == number) {
            t++;
            return t;
        }

        t++;
        printf("(numero di tentativi fino ad adesso: %d)\n", t);

    } while (tentativo != number);

}



