#ifndef COULEURS
#define COULEURS

#include <stdio.h>

#define clrscr() printf("\033[H\033[2J")

#endif

#define couleur(param) printf("\033[%sm",param)





void affichage_etat_courant(); 			// affiche l'etat actuel de la matrice 



void menu(int* choix); 				// premet d'afficher à tout moment le menu et donc de mettre en pause l'automate ( doit relancer l'execution de l'automate à la fin de son execution 





void cadrage(); 				// recadre la console aux coordonnées voulu si affichage plus grand que la console 

void affichage ( int tab[MAX][MAX], int n , int m ,int ligne1, int colonne1,int lignef, int colonnef);
