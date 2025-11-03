#include <stdio.h>

int main() {
    int nb_secret = 32;  
    int nb_user;         

    while (1) {
        printf("Devinez le nombre secret entre 1 et 50: ");
        scanf("%d", &nb_user);
        
        if (nb_user == nb_secret) {
            printf("Succès! \n");
            break;
        } else if (nb_user < nb_secret) {
            printf("Votre supposition est trop faible. Essayez un plus grand nombre.\n");
        } else if (nb_user > nb_secret) {
            printf("Votre supposition est trop élevée. Essayez un plus petit nombre.\n");
        }
    }

    return 0;  
}
