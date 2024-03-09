#include <stdio.h>

#define TVA 20

/*
Le 25/02/2024
Les directives de préprocesseur.
https://www.youtube.com/watch?v=L8q1wJ8z7Ts&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j&index=10
*/

/*

Les directives de préprocesseurs :

    #define : Définie le contenu d'une variable, ou remplace le nom d'une variable.
    #ifnef : Vérifie si la constante existe
    #endif : Ferme le #ifnef (Voir player.h)

*/

/*
Constantes du langage C:
    __FILE__ (nom du fichier)
    __LINE__ (ligne du fichier)
    __DATE__ (date de compilation)
    __TIME__ (heure de compilation)
*/


int main(void){
    int prixHT = 15;
    int prixTTC = 0;

    prixTTC = prixHT + (prixHT * TVA / 100);

    return 0;
}
