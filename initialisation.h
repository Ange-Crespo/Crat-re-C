#define MAX 500 //max 723 au dessus erreur de segmentation...
#define seuil 5 //seuil à partir duquel l'énergie est nulle.

typedef struct //structure des cubes
{
int niveau_actuel;//niveau actuel du cube
float moyenne_autour_actuel;//Moyenne des 8 cubes autour
float energy;
float niveau_a_atteindre;// niveau a atteindre en fonction du niveau à atteindre et de l'energy.
char* couleur;//couleur en fonction du niveau
int palier;
}cube;


<<<<<<< HEAD

void init_matrice(cube tab[][MAX], int n, int m);// creer la matrice initiale pour l'automate cellulaire cette matrice est constituée de cube initialisés




void modifier_cellules();			// permet a l'utilisateur de modifier les cellules de l'automate 



void charger_fichier(int n,int m,FILE* fichier);				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut 




void charger_fichier();				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut 

=======
void init_matrice( cube tab[MAX][MAX],int n,int m);// creer la matrice initiale pour l'automate cellulaire cette matrice est constituée de cube initialisés
>>>>>>> 07ae325e407aec1d962f96c4ba9a4716e9f95147

cube cube_init();
void print_cube();


cube cube_init(void);
