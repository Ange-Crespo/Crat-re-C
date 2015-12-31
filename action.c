#include<stdlib.h>
#include<stdio.h>
#include"initialisation.h"


void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m);

int fclose(FILE* pointeurSurFichier);  // pour fermer un fichier a metttre dans le .h associé

// le parametre est le pointeur sur le fichier renvoie un int 0 si cela a marché et EOF si echec n define situé dans stdio.h qui correspond à un nombre spécial, utilisé pour dire soit qu'il y a eu une erreur, soit que nous sommes arrivés à la fin du fichier. Dans le cas présent cela signifie qu'il y a eu une erreur.





//FILE* fopen(const char* nomDuFichier, const char* modeOuverture);  // w+ mode d'ouverture : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.

/* meteore etant le nom du fichier dans lequel on va ecrire
 mode d'ouverture r pour lecture seule
mode d'ouverture r+ pour lecture et ecriture
*/



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

//__________________________________________________________________________________________________________________________________________


int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c
{
    FILE* fichier = NULL;
    sauvegarder_configuration_courante(tab[MAX][MAX],n,m,fichier);
    
    
    int n=50; // nb de ligne
    int m=200; // nb colonne
    int tab[MAX][MAX]; // definition de la matrice
    
    init_matrice(tab,n,m);
    
    
    return 0;
}


//__________________________________________________________________________________________________________________________________


void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m,FILE* fichier){
    
    int i=0;
    int j=0;
    cube temps;
    
    fichier = fopen("test.txt", "w");// ouvre text.txt en lecture et ecriture
    //Le pointeur fichier devient alors un pointeur sur test.txt.
    
    if (fichier != NULL)
    {
        while (i<n) {
            while(j<m){
                temps = tab[i][j];
                fwrite(&temps, sizeof(cube), 1 ,fichier);
                j++;
            }
            j=0;
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


//__________________________________________________________________________________________________________________________________
    
void charger_fichier(int tab[MAX][MAX],int n,int m,FILE* fichier){				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut
        
    cube test;
        
    fichier = fopen("test.txt", "r");
        
    if (fichier != NULL)
    {
            
            
            
            fclose(fichier);
    }
        
  }

/*
 
 // Boucle de lecture des caractères un à un
 do
 {
 caractereActuel = fgetc(fichier); // On lit le caractère
 printf("%c", caractereActuel); // On l'affiche
 } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
 */
















