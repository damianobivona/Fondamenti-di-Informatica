// Scrivere un programma che chiede all'utente di inserire un numero intero positivo N
// e calcola la somma dei primi N numeri naturali

#include <stdio.h>

int summation(int);

int main() {
    int n;
    int s = 0;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    // assegnamo ad s il valore della funzione summation()
    s = summation(n);
    printf("La somma dei primi [%d] numeri è: %d\n", n, s);
}

int summation(int x) {
    int sum = 0; // non serve inserirla come paramatro, perchè è il return (l'output) ch

    for (int i = 1; i <= x; i++) {
        sum += i;
    }
    return sum;
}