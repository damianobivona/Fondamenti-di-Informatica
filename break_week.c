#include <stdio.h>
int main() {

    int num;

    printf("Inserisci un numero da 1 a 7: ");
    scanf("%d", &num);

    if (num > 7) {
        printf("Hai inserito un valore troppo grande");
    } else {
        switch (num) {
            case 1:
                printf("Lunedì");
            break;
            case 2:
                printf("Martedì");
            break;
            case 3:
                printf("Mercoledì");
            break;
            case 4:
                printf("Giovedì");
            break;
            case 5:
                printf("Venerdì");
            break;
            case 6:
                printf("Sabato");
            break;
            case 7:
                printf("Domenica");
            break;
        }
    }
}
