#include <stdio.h>

/*
Les opérateurs.
Le 23/02/2024
https://www.youtube.com/watch?v=imc6C96-TW8
*/

/*

 + (addition)
 - (soustraction)
 * (multiplication)
 / (division)
 % (modulo) Reste d'une division euclidienne.
 <variable> = <variable> + X ---> variable += x

 --------------------------------------------------

 Fonctionne uniquement pour ajouter 1 ou enlever 1:
 A++
 A--


*/

int main(void){

    int age = 0;
    printf("Quel est votre âge ?\n");
    scanf("%d", &age);
    age += 1;
    printf("Vous avez désormais %d ans",age);
    return 0;

}