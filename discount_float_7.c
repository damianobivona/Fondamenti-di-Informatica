/* Scrivere una funzione che riceva in ingresso un numero float corrispondente al prezzo iniziale di un
articolo e un numero intero s rappresentante il valore percentuale di sconto (cioè, se ad esempio s =
20, significa che all'articolo si applica lo sconto del 20%) e restituisca il prezzo scontato dell'articolo*/

#include <stdio.h>
float discount(float, float);

int main () {

    double price;
    double perc;
    double save;

    printf("Inserisci il prezzo iniziale (usa il punto per i decimali): € ");
    scanf("%lf", &price);

    printf("Inserisci la percentuale di sconto che vuoi applicare (usa il punto per i decimali): ");
    scanf("%lf", &perc);

    save = discount(price, perc);
    printf("(Il tuo prezzo verrà ridotto di: € %.2lf !)\n \n ---- PREZZO FINALE: € %.2lf\n", save, price - save);
}

float discount(float p, float d) {

    return (p * d) / 100;

}
