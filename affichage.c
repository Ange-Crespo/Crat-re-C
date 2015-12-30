#include<stdio.h>

#include"affichage.h"
#include"initialisation.h"










void affichage( cube tab[][MAX], int n, int m,int ligne1, int lignef,int colonne1, int colonnef){  // pour afficher la matrice

    

    int i = ligne1;

    int j = colonne1;

    

    while(i<lignef) {

        while(j<colonnef){

            print_cube("%d",tab[i][j]);

            //printf("  ");

            j++;

        }

        j=colonne1;

        print_cube("\n");

        i++;

    }
return;
}


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
