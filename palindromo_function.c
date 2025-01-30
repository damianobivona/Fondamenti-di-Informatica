#include <stdio.h>

#define LMAX 25

int pal(char[], int);

int main() {

    char word[LMAX];
    char w;

    printf("Inserisci una parola: ");
    
    int a = 0;

    while ( (w = getchar()) != '\n') {
        word[a] = w;
        a++;
    }
    
    word[a] = '\0';

    if (pal(word, a)) {
        printf("La parola (%s) è palindroma!", word);
    } else {
        printf("La parola (%s) NON è palindroma!", word);
    }
}

int pal(char word[], int i) {

    int s = 0;
    int e = i - 1;

    while ( s < e ) {
        if ( word[s] != word[e] ) {
            return 0;
        }
        s++;
        e--;
    }
    return 1;

}