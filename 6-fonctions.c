#include <stdio.h>

/*
Le 24/02/2024
Les fonctions
https://www.youtube.com/watch?v=TT2RbNKr4aU&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j&index=8
*/

/*

Une fonction lors de sa déclaration, doit lui être indiquée quel type de donnée elle retournera.
Entre parenthèses, nous retrouvons ses paramètres. 
Il est plus judicieux de mettre la fonction main tout en bas du code.


*/


int init_ball(posX){
    posX = 150;
    return posX;
}


int main(void){
    int balleX;
    balleX = init_ball(balleX);
    return 0;
}

// Exemple de fonction qui ne prend rien en paramètre et qui ne retourne rien: 

void bonjour(void){
    printf("Bonjour !");
}
