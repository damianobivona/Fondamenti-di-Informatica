// Generare un numero a caso compreso tra 1-100 e chiedere allʼutente un numero fino a
// quando non è uguale a quello generato casualmente. Dire ogni volta se il numero immesso è > o < di quello iniziale.
// Indicare anche il numero di tentativi.

#include <stdio.h>
#include <stdlib.h> // per generale i numeri casuali
#include <time.h> // me lo ha detto un sito su internet e noi ci fidiamo

int main () {
    srand(time(NULL));
    // cambia la generazione del numero ogni avvio (me lo ha detto un sito su internet e noi ci fidiamo)

    int random;
    int guess;
    int i = 1;

    random = rand() % (100 + 1);
    // 101 perché così genera i numeri da 1 a 100
    // (fosse stato solo "100", generava da 0 a 99) (non ho capito perché)

    printf("numero a caso: %d \n", random);
    // mi serve per capire il numero generato
    // non posso andare davvero a tentativi dai


    printf("Ciao :> sono un programmino in C creato un venerdì sera\n");
    printf("Damiano poteva farsi le canne E INVECE\n");
    printf("...e siccome mi annoio... \n\n");
    printf("* rullo di tamburi *\n");
    printf("* rullo di tamburi *\n");
    printf("* rullo di tamburi *\n");
    printf("* rullo di tamburi *\n(si ho copiato e incollato il printf 4 volte\n\n");
    printf("ORA GIOCHIAMO: che numero sto pensando? Inseriscilo qui ->  ");
    scanf("%d", &guess);

    do {
        if (guess < random) {
            printf("Nope... il numero a cui penso è PIU' GRANDE\n\n");

        } else if (guess > random) {
            printf("se vabbé, meno meno... il numero a cui penso è PIU' PICCOLO\n\n");
        }

        i++;

        printf("Riprova :>\n----> ");
        scanf("%d", &guess);

    } while (guess != random);

    printf("SEEE VABBE' HAI AZZECCATO! BRAVO! ecco, TIENI DEI SIMBOLI DI PARAGRAFO:\n¶¶¶¶¶¶¶¶\n");
    printf(">>>> Hai indovinato in %d tentativi...", i);

    if (i <= 3) {
        printf("o sei molto intelligente, o hai avuto culo.");

    } else if (i <= 10) {
        printf("poteva andare meglio, ma anche peggio");

    } else if (i <= 20) {
        printf("fossi in te non giocherei al Lotto");

    } else if ( i > 20) {
        printf("tu sei quello fortunato in amore, vero?");
    }

}