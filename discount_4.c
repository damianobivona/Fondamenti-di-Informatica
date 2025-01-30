/* Scrivere un programma che calcoli lo sconto di un prodotto dato il suo prezzo e la percentuale di
sconto da applicare */

#include <stdio.h>
double discount(double, double);

int main () {

    double price;
    double perc;
    double save;

    printf("Inserisci il prezzo iniziale (usa il punto per i decimali): €  ");
    scanf("%lf", &price);

    printf("Inserisci la percentuale di sconto che vuoi applicare:  ");
    scanf("%lf", &perc);

    save = discount(price, perc);
    printf("(Il tuo prezzo verrà ridotto di: € %.2lf !)\n \n ---- PREZZO FINALE: € %.2lf\n", save, price - save);
}

double discount(double p, double d) {

 return (p * d) / 100;

}