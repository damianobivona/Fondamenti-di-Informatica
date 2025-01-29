#include <stdio.h>
int main () {
    int age;

    printf("inserisci la tua età: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Sei minorenne");}
    else if (age >= 65) {
        printf("sei anziano");}
    else printf("Sei maggiorenne");
}