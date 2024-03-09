#include <stdio.h>

/*
Le 08/03/2024

 -- Les tableaux 
    https://www.youtube.com/watch?v=6nkUWnCoRp4



- Déclaration tableau :

<type> <nom_tableau>[x]; --> Posséde des valeurs aléatoires à sa déclaration

Initialisation du tableau : 
<type> <nom_tableau>[x] = {x,y,z,..};

- Accès au tableau :

<nom_tableau>[x] = y; élément d'indice x dans le tableau. (X+1ème élément du tableau.)
Pareil que : *(nom_tableau + X )

nom_tableau; adresse mémoire du tableau 
*nom_tableau; 1er élément du tableau 

*/

#define TAILLE_TAB 5

void parcourir_tableau(int (*p_tab)[2], int taille_x, int taille_y);
int (*creer_tableaudeuxentrees(void))[2];
int *creer_tableau(void);
void afficher_tableau(int taille,int p_tab[]);

int main(void){
    int (*grand_tableau)[2]; 
    grand_tableau = creer_tableaudeuxentrees();
    
    int tableaudecinqemplacements[5]; // Exemple de déclaration
    int tableau[TAILLE_TAB] = {16,4,-5,22,188}; // Exemple d'initialisation
    int tabeaudecentszeros[100] = {0}; 
    int *nouveau_tableau = creer_tableau(); // Affecte le nom de variable à l'adresse retournée
/*  
     seulement la première case est définie à zéro le reste est par défaut à zéro (convention)
     
     int tabeaudecentszeros[100] = {}; donne le même résultat.
     int tableau[667] = {5}; mets seulement la première valeur à cinq.
     int tableau[667] = {6,6,7}; attribu le 667 respectivement aux trois premiers emplacement du tableau


*/
    // tableaudecinqemplacements[3] = 6; // Exemple d'accès

    afficher_tableau(TAILLE_TAB,tableau);
    parcourir_tableau(grand_tableau,3,2);

    
    return 0;  
}

void afficher_tableau(int taille, int *p_tab){
    int i;
    for(i = 0 ; i < taille ; i++)
        printf("Valeur numéro %d  : %d\n",i,p_tab[i]);

}

int *creer_tableau(void){
    static int tableau_entiers[5] = {0}; // avec static, le tableau peut s'exporter en dehors de la fonction
    int i;

    for(i = 0; i < 5 ; i++)
        tableau_entiers[i] = i * 3;

    return tableau_entiers; // Retourne l'adresse du premier élément 
}

int (*creer_tableaudeuxentrees(void))[2]{ // Retourne un pointeur vers un tableau de taille 2
    static int tab_deuxentrees[3][2] = {{1,2},{3,4},{5,6}};
     // Crée un tableau à double entrée.
    
    return tab_deuxentrees;
}

void parcourir_tableau(int (*p_tab)[2], int taille_x, int taille_y){
    int x, y;
    for(x = 0 ; x < taille_x ; x++){
        for(y = 0 ; y < taille_y ; y++){
            printf("[%d][%d] = %d\n",x,y,p_tab[x][y]);

        }
    }


}