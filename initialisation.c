#include<stdio.h>

#include"initialisation.h"










//__________________________________________________________________________________________________________________________________



//__________________________________________________________________________________________________________________________________________

int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c

{

    int n=50; // nb de ligne
    int m=200; // nb colonne
    int tab[MAX][MAX]; // definition de la matrice
    
    init_matrice(tab,n,m);
    affichage(tab,n,m,0,50,0,200);
    FILE* fichier = NULL;
    
    sauvegarder_configuration_courante(tab,n,m,fichier); // pour test 
    
    return 0;


    int n=50;

    int m=200;

    int tab[MAX][MAX];

    init_matrice(tab,n,m);

    affichage(tab,n,m,3,28,4,120);

    

//__________________________________________________________________________________________________________________________________
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
cube cube_init(){
	
	cube carre;
	carre.niveau_actuel=128;
	carre.moyenne_autour_actuel=128;
	carre.energy=0;
	carre.niveau_a_atteindre=128;
	carre.couleur=32; // a modifier
	
	return carre;
}
//__________________________________________________________________________________________________________________________________

void init_matrice( int tab[MAX][MAX],int n,int m){// creer la matrice initiale pour l'automate cellulaire a retester pour structure
	cube carre;
	carre=cube_init()
    int i=0;
    int j=0;
    
    while(i<n) {
        while(j<m){
            tab[i][j]=carre;
            j++;
        }
        j=0;
        i++;
    }