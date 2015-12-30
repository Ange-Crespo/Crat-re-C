#include<stdio.h>
#include"affichage.h"
#include"initialisation.h"



//__________________________________________________________________________________________________________________________________________
cube cube_init(){
	
	cube carre;
	carre.niveau_actuel=128;
	carre.moyenne_autour_actuel=128;
	carre.energy=0;
	carre.niveau_a_atteindre=128;
	carre.couleur=0; // a modifier
	
	return carre;
}
//TEST__________________________________________________________________________________________________________________________________
void print_cube(cube carre){
	
	printf("\n %d \n %f \n %f \n %f \n %f \n",carre.niveau_actuel,carre.moyenne_autour_actuel,carre.energy,carre.niveau_a_atteindre,carre.couleur);

	return;
}

//__________________________________________________________________________________________________________________________________
void init_matrice(cube tab[][MAX],int n,int m){// creer la matrice initiale pour l'automate cellulaire a retester pour structure
	cube carre;
	carre=cube_init();
	
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

            tab[i][j]=carre;

            j++;

        }

        i++;

    }

    

}


//__________________________________________________________________________________________________________________________________
int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c

{

    int n=50; // nb de ligne
    int m=200; // nb colonne
    cube tab[MAX][MAX]; // definition de la matrice ERREUR DE SEGMENTATION!!!!
    cube carre;
    init_matrice(tab,n,m);
    /*affichage(tab,n,m,0,50,0,200);*/
    //FILE* fichier = NULL;
    
    //sauvegarder_configuration_courante(tab,n,m,fichier); // pour test 
	carre=cube_init();
	print_cube(carre);
    return 0;

    
    

   /* int n=50;

    int m=200;

    int tab[MAX][MAX];

    init_matrice(tab,n,m);

    affichage(tab,n,m,3,28,4,120);

    */

//__________________________________________________________________________________________________________________________________

    return 0; 

}
