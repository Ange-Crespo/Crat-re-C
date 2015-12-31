#include<stdio.h>

#include"affichage.h"
#include"initialisation.h"




typedef struct //structure des cubes
{
    int niveau_actuel;//niveau actuel du cube
    float moyenne_autour_actuel;//Moyenne des 8 cubes autour
    float energy;
    float niveau_a_atteindre;// niveau a atteindre en fonction du niveau à atteindre et de l'energy.
    float couleur;//couleur en fonction du niveau
}cube;


//__________________________________________________________________________________________________________________________________________

cube cube_init(){
    
    cube carre;
    carre.niveau_actuel=128;
    carre.moyenne_autour_actuel=128;
    carre.energy=0;
    carre.niveau_a_atteindre=128;
    carre.couleur=#345874; // a modifier
    
    return carre;
}

//__________________________________________________________________________________________________________________________________________



void affichage ( int tab[MAX][MAX], int n, int m,int ligne1, int lignef,int colonne1, int colonnef){  // pour afficher la matrice

    

    int i = ligne1;

    int j = colonne1;

    

    while(i<lignef) {

        while(j<colonnef){

            printf("%d",tab[i][j]);

            //printf("  ");

            j++;

        }

        j=colonne1;

        printf("\n");

        i++;

    }

}


//__________________________________________________________________________________________________________________________________________


cadrage( int tab[MAX][MAX], int n, int m,int ligne1, int lignef,int colonne1, int colonnef){  // pour afficher la matrice

	print("\nQuel est la 1ère ligne que vous souhaitez afficher?\n");
	scanf("%d",&ligne1);
	print("\nQuel est la dernière ligne que vous souhaitez afficher?\n");
	scanf("%d",&lignef);
	print("\nQuel est la 1ère colonne que vous souhaitez afficher?\n");
	scanf("%d",&colone1)
	print("\nQuel est la dernière colonne que vous souhaitez afficher?\n");
	scanf("%d",&colonnef)
	affichage( int tab[MAX][MAX], int n, int m,int ligne1, int lignef,int colonne1, int colonnef);	// pour afficher la matrice
	
}
