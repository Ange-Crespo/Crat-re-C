#define MAX 1000

void init_matrice(int tab[MAX][MAX], int n, int m);	// creer la matrice initiale pour l'automate cellulaire

void modifier_cellules();			// permet a l'utilisateur de modifier les cellules de l'automate 


void charger_fichier(int n,int m,FILE* fichier);				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut 

void affichage ( int tab[MAX][MAX], int n , int m ,int ligne1, int colonne1,int lignef, int colonnef);