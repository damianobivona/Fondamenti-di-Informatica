/* Scrivete un programma che generi a caso un array di interi e calcoli la somma dei suoi elementi:
strutturate il programma usando una funzione per generare lʼarray e una per sommare i suoi elementi */

#include <stdio.h>
#include <stdlib.h>

#define MAXARR 25

void gen_array(int, int[]);
int sum_array(int);

int main() {
    int array[MAXARR];

}

void gen_array(int n, int a[]) {

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

int sum_array(int sum) {
    sum = 0;

    for (int i = 0; i < MAXARR; i++) {
        sum += a[i];
    }

}
