#include <iostream>

int main() {
    //Scrivere un programma che calcola e stampa lʼarea di un rettangolo dopo aver chiesto in ingresso (da tastiera) la base e lʼaltezza(due numeri interi)
    int b, h, area;
    printf("Inserisci il valore della base: ");
    scanf("%d", &b);

    printf("Inserisci il valore dell'altezza: ");
    scanf("%d", &h);

    area = b * h;
    printf("L'area del rettangolo è uguale a: %d", area);

    printf("L'area del rettangolo con base %d e altezza %d è uguale a: %d", b, h, b * h);
}
