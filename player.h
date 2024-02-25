#ifndef PLAYER_H
#define PLAYER_H


/*
Ici on écrit les prototypes de chaques fonctions de player.c
Le #ifndef PLAYER_H permets d'eviter les importations infinies, 
il vérifie si il ne l'as pas déjà importé.

*/


void bonjour(void);
int reset_niveau(void);
int augmente_niveau(int);

#endif