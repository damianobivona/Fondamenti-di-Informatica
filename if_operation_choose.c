#include <stdio.h>

int main() {
    double x, y;
    char operator; // char è un sottoinsieme di string

    printf("Inserisci il primo numero: ");
    scanf("%lf", &x);
    printf("Inserisci il secondo numero: ");
    scanf("%lf", &y);

    /* printf("Che operazione vuoi effettuare? \n");
    /* printf("Scrivi + per l'addizione\nScrivi - per la sottrazione\nScrivi * per la moltiplicazione\nScrivi : o / per la divisione: ");
    scanf(" %c", &operator); // si usa %s (stringa) per gli operatori? (funziona con %s ma in realtà non funziona) */
    printf("Scrivi l'operazione che vuoi fare, scegli tra + - * / (o :): ");
    scanf(" %c", &operator); //perchè si mette lo spazio?

    // DA INTERNET:
    // providing %s is wrong, as a single char is one element too short to scan and hold an array, that is null-terminated.
    // This causes undefined behavior as memory overrun happens.
    // %c should have "worked", if the input stream did not have the newline stored from previous ENTER key press.
    // If you clean off the input stream of all pending inputs, you'll see it works.

    // con %c funziona se metto lo spazio prima

    if (operator == '+') {
        printf("La somma è: %.2f", x + y);
    } else if (operator == '-') {
        printf("La differenza è: %.2f", x - y);
    } else if (operator == '*') {
        printf("Il prodotto è: %.2f", x * y);
    } else if (operator == '/' || ':') { // operatore OR
        printf("La divisione è: %.2f", x / y);
    }
}
