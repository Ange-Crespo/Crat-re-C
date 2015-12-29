#include<stdio.h>

#include"initialisation.h"


<<<<<<< HEAD



void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m,FILE* fichier);

int fclose(FILE* pointeurSurFichier);  // pour fermer un fichier a metttre dans le .h associé

// le parametre est le pointeur sur le fichier renvoie un int 0 si cela a marché et EOF si echec n define situé dans stdio.h qui correspond à un nombre spécial, utilisé pour dire soit qu'il y a eu une erreur, soit que nous sommes arrivés à la fin du fichier. Dans le cas présent cela signifie qu'il y a eu une erreur.





FILE* fopen(const char* nomDuFichier, const char* modeOuverture);  // w+ mode d'ouverture : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.

// meteore etant le nom du fichier dans lequel on va ecrire
//mode d'ouverture r pour lecture seule
//mode d'ouverture r+ pour lecture et ecriture










//__________________________________________________________________________________________________________________________________









=======
//__________________________________________________________________________________________________________________________________________
>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c

{
<<<<<<< HEAD
    int n=50; // nb de ligne
    int m=200; // nb colonne
    int tab[MAX][MAX]; // definition de la matrice
    
    init_matrice(tab,n,m);
    affichage(tab,n,m,0,50,0,200);
    FILE* fichier = NULL;
    
    sauvegarder_configuration_courante(tab,n,m,fichier); // pour test 
    
    return 0;

    
    
=======

    int n=50;

    int m=200;

    int tab[MAX][MAX];

    init_matrice(tab,n,m);

    affichage(tab,n,m,3,28,4,120);

>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
    

<<<<<<< HEAD
//__________________________________________________________________________________________________________________________________
=======
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
>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427

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

<<<<<<< HEAD
//__________________________________________________________________________________________________________________________________

void init_matrice( int tab[MAX][MAX],int n,int m){// creer la matrice initiale pour l'automate cellulaire
=======
>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
    
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

<<<<<<< HEAD
//__________________________________________________________________________________________________________________________________

void modifier_cellules(float tab[MAX][MAX],int n){ // n est le nombre de ligne
    // attention il faut dem    nder le nb de ligne pour positionner le sol
    
=======


/*void modifier_cellules(float tab[MAX][MAX],n,m){

>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
    int colonne;

    int valeur;
<<<<<<< HEAD
    int nbcolonne;
    printf("combien de colonnes voulez-vous modifier?");
    scanf("%d",&nbcolonne);
    
    printf(" A partir de quelle colonne voulez-vous modifier ? ");
    scanf("%d",&colonne);
    
    printf("quelle valeur voulez vous mettre à ces ou cette colonne(s) (0 ou 1 autoriser) ?");
=======

    printf(" quelle colonne voulez vous modifier ? ")

    scanf("%d",&colonne);

    printf("quelle valeur voulez vous mettre à cette colonne (0 ou 1 autoriser) ?");

>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
    scanf("%d",&valeur);

    
<<<<<<< HEAD
    while (valeur != 0 || 1) {
        printf(" on vous a dit de mettre 1 ou 0 rien d'autre veuillez être aimable avec ce programme !!!!");
        scanf("%d",&valeur);
    }
    int i=0;
        while(i<n) {                            // modification des colonnes voulus
            while (colonne<colonne+nbcolonne) {
            tab[i][colonne]=valeur;
            colonne++;
            }
            i++;
        }
    }


//__________________________________________________________________________________________________________________________________

/*

 void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m);
 
 int fclose(FILE* pointeurSurFichier);  // pour fermer un fichier a metttre dans le .h associé
 
 // le parametre est le pointeur sur le fichier renvoie un int 0 si cela a marché et EOF si echec n define situé dans stdio.h qui correspond à un nombre spécial, utilisé pour dire soit qu'il y a eu une erreur, soit que nous sommes arrivés à la fin du fichier. Dans le cas présent cela signifie qu'il y a eu une erreur.
 
 
 
 
 
 FILE* fopen(const char* nomDuFichier, const char* modeOuverture);  // w+ mode d'ouverture : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.
 
 // meteore etant le nom du fichier dans lequel on va ecrire
 //mode d'ouverture r pour lecture seule
 //mode d'ouverture r+ pour lecture et ecriture


int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c
{
    FILE* fichier = NULL;
    sauvegarder_configuration_courante(tab[MAX][MAX],n,m,fichier);
    return 0;
}


void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m,FILE* fichier){
    
    int i=0;
    int j=0;
    
    fichier = fopen("test.txt", "w+");// ouvre text.txt en lecture et ecriture
    //Le pointeur fichier devient alors un pointeur sur test.txt.
    
    if (fichier != NULL)
    {
        while (i<n) {
            while(j<m){
                fputc(tab[i][j], fichier); //caractere a ecrire et pointeur sur fichier
                j++;
            }
            i++;
        }
        
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
}
*/

//__________________________________________________________________________________________________________________________________

void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m,FILE* fichier){
    
    int i=0;
    int j=0;
    int temps;
    
    fichier = fopen("test.txt", "w");// ouvre text.txt en lecture et ecriture
    //Le pointeur fichier devient alors un pointeur sur test.txt.
    
    if (fichier != NULL)
    {
        while (i<n) {
            while(j<m){
                temps = tab[i][j];
                fprintf(fichier, "%d", temps);
                j++;
            }
            j=0;
            i++;
=======

    int i=0;

    while(i<n) {

        

    }

>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427
        }
        
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
}


//__________________________________________________________________________________________________________________________________

<<<<<<< HEAD
void charger_fichier(int n,int m,FILE* fichier){				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut
    
    int caractereActuel = 0;
    
    fichier = fopen("test.txt", "r");
    
    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
        
        fclose(fichier);
    }
    
}




=======


}

*/
>>>>>>> c5afc2ebfae9f3eac5a89207d7391ad703d2e427



