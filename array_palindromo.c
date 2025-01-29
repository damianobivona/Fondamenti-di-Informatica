#include <stdio.h>
#define MAXLINE 20

int main(void) {
    char parola;
    char p[MAXLINE];
    int i = 0;


    printf("Please enter a parola: ");

    while ((parola = getchar()) != '\n'  && i < MAXLINE - 1) {
        p[i] = parola;
        i++;
    }

    p[i] = '\0';
    printf("Array = %s \n", p);

    int a = 0;
    int b = i - 1;

    while ( a < b ) {
        if (p[a] != p[b]) {
            printf("Non è palindromo\n");
            return 0;
            }
        a++;
        b--;
    }
    printf("è un palindromo");
    return 0;
}