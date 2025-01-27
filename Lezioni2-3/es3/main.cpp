#include <iostream>

int main() {
    //Scrivere un programma che calcoli lo sconto di un prodotto dato il suo prezzo e la percentuale di sconto da applicare

    double a;
    double b;
    double sconto;

    printf("Inserisci il costo del prodotto: ");
    scanf("%lf", &a);

    printf("Qual è la percentuale di sconto da applicare? (Indica solo il valore, senza simboli): ");
    scanf("%lf", &b);

    sconto = (a * b)/100;

    printf("_________________________\nPrezzo iniziale: %.2lf€\t", a);
    printf("Percentuale di sconto applicata: %.2lf%%\t\t", b);
    printf("Prezzo finale: %.2lf€\t", a-sconto);
    printf("Hai risparmiato ben %.2lf€ !", sconto);
}
