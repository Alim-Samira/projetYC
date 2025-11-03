#include <stdio.h>

int main() {
    int nb_secret = 32;  // Secret number to guess
    int nb_user;         // Variable to store the user's guess

    // Prompt the user for their guess
    printf("Bienvenue dans le jeu de devinette!\n");
    printf("Devinez le nombre secret entre 1 et 100: ");
    
    // Read user input
    scanf("%d", &nb_user);
    
    // Compare the user's guess with the secret number
    if (nb_user == nb_secret) {
        printf("Succès! Vous avez deviné le nombre secret!\n");
    } else if (nb_user < nb_secret) {
        printf("Votre supposition est trop faible. Essayez un plus grand nombre.\n");
    } else {
        printf("Votre supposition est trop élevée. Essayez un plus petit nombre.\n");
    }

    return 0;  // Return 0 to indicate successful execution
}
