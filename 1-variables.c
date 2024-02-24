#include <stdio.h>

/*
Le 23/02/2024
Les variables. 
https://www.youtube.com/watch?v=kKeGTDyvi1o
*/



/*

Les types:
    char, signed char, [char,int,short,long,long long], float,double,longue double. 
    [] - peut être unsigned = valeur non signée, (strictement positif).

*/

/*
Les Drapeaux : 
    %d : nombre entier (int)
    %f : nombre flottant
    %c : caractère (char)
    %s : chaîne de caractère
*/




int main(void){

    const PI = 3.14; // Déclaration d'une constante

    //Déclaration et affectation d'une variable de type entier (int)
    
    int aireDuCarre = 0;

    //Déclaration et affectation d'une variable de type float

    float AireDuTriangle = 125.655;

    //Déclaration et affectation d'une variable de type char

    signed char lettre = 'B';

    register int nombre1; //Déclaration et affecation au registre (processeur)
    volatile int nombre2; //Déclaration et affecation a la mémoire volatile (RAM)
    
    // N'est plus nécessaire aujourd'hui



    printf("Le nombre est %d\n", aireDuCarre);

    return 0;
}