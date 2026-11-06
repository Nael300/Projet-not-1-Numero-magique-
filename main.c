#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Generation du nombre aleatoire
    srand(time(NULL));                        // Permet d'avoir un nombre different a chaque partie
    int random_number = rand() % 100 + 1;     // Choisit un nombre entre 1 et 100
    int guess = 0;                            // Creation d'une memoire pour stocker la proposition du joueur

    printf("Choisissez un nombre entre 1 et 100 :\n");

    while (guess != random_number) {
        scanf("%d", &guess);

        //Informations donnee au joueur sur sa proposition
        if (guess > random_number) {
            printf("C'est moins !\n");
        } else if (guess < random_number) {
            printf("C'est plus !\n");
        } else {
            printf("Gagne !\n");
        }
    }

    return 0;
}

