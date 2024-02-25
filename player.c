#include <stdio.h>
#include "player.h"

/*

Ici également on inclus le player.h.
On écrit les fonctions ici.

Rappel : Chaque variable est propre à sa fonction et son contexte.
Une variable déclarée en dehors de toute fonction est une variable globale.
le mot clé static, indique que la variable ne être détruite qu'a la fin du programme et limité au contexte du fichier.
si le mot clé static à déjà été passé, il ne l'éxécuteras pas une seconde fois.
Si le mot static est passé à une fonction elle limitera celle-ci au contexte du fichier.
*/

float TVA = 0.20;
static int PRIX = 10;

void bonjour(void){
    printf("Bonjour :)\n");
    printf("Pour 10e nous payons %.2f euros de TVA.\n", PRIX*TVA);
}

int reset_niveau(void){
    return 0;
}

int augmente_niveau(int niveau){ // A la compilation, une erreur s'affiche si on déclare pas le type d'un argument.
    niveau++;
    return niveau;
}