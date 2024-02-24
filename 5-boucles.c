#include <stdio.h>

/*
Le 24/02/2024
Les boucles.
https://www.youtube.com/watch?v=in-XJLbQ1iY&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j&index=7
*/



/*

Différence entre le while et le do while : 

Le while vas tester la condition puis effectuer l'action.
Le do while vas effectuer une première fois l'action puis ensuite tester la condition.

*/


/*

La boucle for :

La première valeure est celle qu'on vas incrémenter, ici on lui donne une valeur de départ de 0.
La deuxième est la condition pour qu'elle s'éxécute.
La troisième est la valeur de son incrémentation.

*/

int main(void)
{
    int i = 0;
    int x;
    while(i < 10){ // Comme en python, la condition se trouve entre parenthèses. 
        printf("Ceci est une boucle.\n");
        i++;
    }
    return 0;

    do
    {
        printf("Ceci est est une seconde boucle.\n"); 
        i++;
    } while(i < 5); 

    return 0;

    for(x = 0 ; i < 5 ; i+=2)
    {
        printf("Ceci est une toisième boucle. \n");
    }
}
