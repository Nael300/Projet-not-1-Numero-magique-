#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Generation du nombre aleatoire
    srand(time(NULL));                        // Permet d'avoir un nombre different a chaque partie
    int random_number = rand() % 100 + 1;     // Choisit un nombre entre 1 et 100
    int guess = 0;                            // Creation d'une memoire pour stocker la proposition du joueur
    int attempts = 0;                         // Compteur du nombre d'essais réalisés
    int max_attempts = 7;                     // Nombre d'essais maximum autorisés

    printf("Choisissez un nombre entre 1 et 100 (vous avez %d essais) :\n", max_attempts);

    // La boucle continue tant que le nombre n'est pas trouvé ET qu'il reste des essais
    while (guess != random_number && attempts < max_attempts) {
        scanf("%d", &guess);
        attempts++; // On ajoute 1 au compteur à chaque tentative

        //Informations donnee au joueur sur sa proposition
        if (guess > random_number) {
            printf("C'est moins !\n");
        } else if (guess < random_number) {
            printf("C'est plus !\n");
        } else {
            printf("Gagne !\n");
        }
    }

    // Si la boucle s'est terminée sans trouver le nombre
    if (guess != random_number) {
        printf("Perdu, le nombre etait %d\n", random_number);
    }

    return 0;
}
