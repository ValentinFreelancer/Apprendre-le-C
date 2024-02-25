#include <stdio.h>
#include "player.h"

/*
Le 25/02/2024
Programmation modulaire. 
https://www.youtube.com/watch?v=tXgSx9MkVjs&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j&index=9
gcc *.c -o prog.exe
*/

int main(void){
    int level = 5;
    bonjour();
    level = reset_niveau();
    printf("Niveau actuel : %d\n", level);
    level = augmente_niveau(level);
    printf("Niveau actuel : %d\n", level);
    return 0;
}