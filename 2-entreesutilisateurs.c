#include <stdio.h>

/*
Les entrées utilisateurs.
Le 23/02/2024
https://youtu.be/I9xlZGDMfrw?si=D3IANqU6sZV91jt5
*/

/*
Utilisation du &:
    maVariable : contenu de la variable
    &maVariable : Affecte la donnée à l'adresse de la variable.
*/

/*
Précision sur le scanf:
    A ne pas utiliser avec des chaînes de caractères. Risque de Buffer Overflow.
*/

int main(void)
{
    int ageUtilisateur = 0;
    printf("Quel âge avez-vous ?\n");
    scanf("%d", &ageUtilisateur);
    printf("Vous avez %d ans. \n", ageUtilisateur);
    return 0;


}