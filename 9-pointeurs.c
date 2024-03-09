#include <stdio.h>

/*
Le 05/03/2024
Les pointeurs 
https://www.youtube.com/watch?v=Qra-0U_jEKs

Le pointeur est une variable qui contient l'adresse d'une autre variable. 

%p -> affiche une adresse de variable ou pointeur

Variables :
    maVariable : valeur stockée dans l'espace mémoire 
    &maVariable : Adresse de l'espace mémoire

Pointeurs : 

    monPointeur : adresse de la variable pointée 
    *monPointeur : valeur de la variable pointée
    &monPointeur : adrese du pointeur

    Pour le déclarer : 
        int *[nomdupointeur] = [NULL] OU [&uneVariable];
        ex : 
            int *pt_1 = &xPlayer
*/          



void inversernombre(int *nombreA, int *nombreB){
    
    int temporaire = 0;

    temporaire = *nombreB;
    *nombreB = *nombreA;
    *nombreA = temporaire;

}
int main(void){
    int nombreA = 100; // Demande au système d'exploitation un accès à la mémoire 
    int nombreB = 250;

    int *pointeur = NULL; 

    //printf("Adresse de nombreB  : %p\n", &nombreB);

    /*
    printf("Avant : nombreA -> %d, nombreB -> %d\n", nombreA, nombreB);
    inversernombre(&nombreA,&nombreB);
    printf("Après : nombreA -> %d, nombreB -> %d\n", nombreA, nombreB); */

    return 0;
}