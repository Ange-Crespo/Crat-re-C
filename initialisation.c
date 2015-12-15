#include<stdio.h>

#include"initialisation.h"


//__________________________________________________________________________________________________________________________________________
int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c

{

    int n=50;

    int m=200;

    int tab[MAX][MAX];

    init_matrice(tab,n,m);

    affichage(tab,n,m,3,28,4,120);

    

    return 0; 

}
//__________________________________________________________________________________________________________________________________________
typedef struct //structure des cubes
{
int niveau_actuel;//niveau actuel du cube
float moyenne_autour_actuel;//Moyenne des 8 cubes autour
float energy;
float niveau_a_atteindre;// niveau a atteindre en fonction du niveau à atteindre et de l'energy.
float couleur;//couleur en fonction du niveau
}cube;

//__________________________________________________________________________________________________________________________________________
float moyenne(cube carre,n,i,j) 
{

a=;
b=carre->pos.i-1;
c=carre->pos.j+1;
d=carre->pos.j-1;
}
//__________________________________________________________________________________________________________________________________________
cube cube_init(){
	
	cube carre;
	carre.niveau_actuel=128;
	carre.moyenne_autour_actuel=128;
	carre.energy=0;
	carre.niveau_a_atteindre=128;
	carre.couleur=#345874;
	
	return carre;
}
//__________________________________________________________________________________________________________________________________________
void init_matrice( cube tab[MAX][MAX],int n,int m){// creer la matrice initiale pour l'automate cellulaire cette matrice est constituée de cube initialisés

    
	cube carre;
	carre=cube_init()
	
    int i=0;

    int j=0;

    

    while(i<n/2) {

        while(j<m/2){

            tab[i][j]=carre;

            j++;

        }

        i++;

    }

    

    i=n/2;

    while(i<n) {

        j=0;

        while(j<m){

            tab[i][j]=1;

            j++;

        }

        i++;

    }

    

}



/*void modifier_cellules(float tab[MAX][MAX],n,m){

    int colonne;

    int valeur;

    printf(" quelle colonne voulez vous modifier ? ")

    scanf("%d",&colonne);

    printf("quelle valeur voulez vous mettre à cette colonne (0 ou 1 autoriser) ?");

    scanf("%d",&valeur);

    

    int i=0;

    while(i<n) {

        

    }

        }



}

*/



