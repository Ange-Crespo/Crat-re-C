#include<stdio.h>
//#include"affichage.h"

<<<<<<< HEAD
#include"calcul.h"
=======
#include"initialisation.h"










//__________________________________________________________________________________________________________________________________



//__________________________________________________________________________________________________________________________________________



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
>>>>>>> 07ae325e407aec1d962f96c4ba9a4716e9f95147


//__________________________________________________________________________________________________________________________________________
cube cube_init(){
	
	cube carre;
	carre.niveau_actuel=128;
	carre.moyenne_autour_actuel=128;
	carre.energy=0;
	carre.niveau_a_atteindre=128;
<<<<<<< HEAD
	carre.couleur=0; // a modifier
=======
	carre.couleur=32; // a modifier
>>>>>>> 07ae325e407aec1d962f96c4ba9a4716e9f95147
	
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
<<<<<<< HEAD
	carre=cube_init();
	
    int i=0;
    int j=0;
	
	int i2=0;
	int j2=0;
    

    while(i<=n) {
		
		if(i<n/2){i2++;}
		else{i2--;}
		i++;
		while(j<=m){
		
            tab[i][j]=carre;
		
			if(j<m/2){j2++;}
			else {j2--;}
			tab[i][j].energy=tab[i][j].energy+j2+i2;
			j++;
			
		}
	}

}


//__________________________________________________________________________________________________________________________________
int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c

{

    int n=50; // nb de ligne
    int m=200; // nb colonne
    cube tab[MAX][MAX]; // definition de la matrice ERREUR DE SEGMENTATION!!!! réparer
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
=======
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
>>>>>>> 07ae325e407aec1d962f96c4ba9a4716e9f95147
