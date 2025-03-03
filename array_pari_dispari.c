/*Scrivi una funzione che verifichi se in un array gli elementi pari e dispari sono alternati.*/

#include <stdio.h>

int controll(int[], int);

int main() {

}

int controll(int v[], int x) {
    for ( int i = 0; i < x; i++) {
        if (v[i] % 2 == 0) { // se è PARI (deve controllare se il seguente è dispari)
            if (v[i+1] % 2 != 0) { // se il seg. è DISPARI
            }
        }
        else if (v[i] % 2 != 0) { // controllo se è DISPARI
            if (v[i] % 2 == 0) { // se il seguente è PARI
            }
        }
    }
}

