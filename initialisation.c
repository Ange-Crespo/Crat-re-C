#include<stdio.h>
#include"initialisation.h"

int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c
{
    int n=50;
    int m=200;
    int tab[MAX][MAX];
    init_matrice(tab,n,m);
    affichage(tab,n,m,3,28,4,120);
    
    return 0; 
}




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

void init_matrice( int tab[MAX][MAX],int n,int m){// creer la matrice initiale pour l'automate cellulaire
    
    int i=0;
    int j=0;
    
    while(i<n/2) {
        while(j<m/2){
            tab[i][j]=0;
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


