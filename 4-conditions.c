#include <stdio.h>

/*
Le 23/02/2024
Les conditions.
https://www.youtube.com/watch?v=_MP8yZjQCgk
*/


/*
   == : égal à
   != : différent de 
   <  : plus petit que
   >  : plus grand que
   <= : plus petit ou égal à
   >= : plus grand ou égal à

   && : ET
   || : OU
   !  : N'EST PAS 

*/

int main(void){

    int nombre = 0;
    int vraioufaux = 1;
    int age = 0;
    int nombre = 5;
    printf("Quel est votre âge ?\n");
    scanf("%d",&age);


    if(nombre == 0)
    {
        printf("Nombre vaut bien 0.\n");
    }
    else
    {
        printf("Nombre est différent de 0");
    }

    if(vraioufaux){ // Vérifie si vraioufaux vaut 1 ou zéro (vrai ou faux)
        printf("Vrai.");
    } else {
        printf("Faux.");
    }


    (vraioufaux == 1) ? printf("Vrai\n") : printf("Faux\n");
    vraioufaux = (nombre == 5) ? 1 : 0; // Si nombre est égal à 5, vraioufaux devient vrai. Sinon il devient Faux.
    
    
    if(age < 1 ){
        printf("Tu n'es pas né\n");
    } else if(age >= 18) { // Exemple de else if
        printf("Tu es majeur.\n");
    } else if(age > 100 && age < 200){ // Exemple de double condition
        printf("Tu es centenaire.\n");
    } else if(age < 18) {
        printf("Tu es mineur.\n");
    } else {
        printf("Tu es censé être mort!\n");
    }



    // Exemple pour le switch

    switch(nombre){
        case 0:
            printf("Le nombre est égal à 0");
            break; // Toujours mettre un break pour quitter le switch
        case 2:
            printf("Le nombre est égal à 2");
            break;
        default:
            break;
    }
    
    return 0;
}
