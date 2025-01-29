/* Scrivere un programma che calcola e stampa le 4 operazioni aritmetiche dopo aver chiesto in
ingresso (da tastiera) di due numeri interi */

// provare a fare una funzione per singola operazione? Pazzo? Vediamo poi settimana prossima

#include <stdio.h>

int oper(int, int, int); // Ha senso mettere void?

int main () {
    int operation = 0;
    int n1 = 0;
    int n2 = 0;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);

    printf("quale operazione vuoi effettuare?\n\n");
    printf("1) SOMMA | ADDIZIONE\n");
    printf("2) SOTTRAZIONE\n");
    printf("3) PRODOTTO | MOLTIPLICAZIONE\n");
    printf("4) DIVISIONE (ti dico anche se c'è il resto ah!\n");
    scanf("%d", &operation);

    oper(n1, n2, operation);
    return 0;
}

int oper(int a, int b, int op) {

    switch (op) {
        case 1:
             printf("%d", a + b);
        break;

        case 2:
            printf("%d", a - b);
        break;

        case 3:
             printf("%d", a * b);
        break;

        case 4:
            printf("%d : %d = %d, resto %d", a, b, a / b, a % b);
        break;
    }
}