#ifndef COULEURS
#define COULEURS

#include <stdio.h>

#define clrscr() printf("\033[H\033[2J")

#endif

#define couleurscr(param) printf("\033[%sm",param)





void cadrage(); 				// recadre la console aux coordonnées voulu si affichage plus grand que la console 

void affichage ( int tab[MAX][MAX], int n , int m ,int ligne1, int colonne1,int lignef, int colonnef);
