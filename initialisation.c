#include<stdio.h>


int main( int argc , char *argv[])
{
    int n=100;
    float* tab[n][n];
    init_matrice(tab,n);
    affichage(tab,n);
    return 0; 
}




void affichage ( float* tab , int n ){  // pour afficher la matrice
    
    int i=0;
    
    while(i<n) {
        while(j<n){
            printf("%f"tab[i][j],);
            j++
        }
        i++;
    }
}

void init_matrice( float* tab[][],int n){// creer la matrice initiale pour l'automate cellulaire
    float tab[n][n];
    int i=0;
    
    while(i<n/2) {
        while(j<n/2){
            tab[i][j]=0;
            j++;
        }
        i++;
    }
    i=n/2;
    while(i<n) {
        j=n/2;
        while(j<n){
            tab[i][j]=1;
            j++
        }
        i++
    }
}

//void modifier_cellules(){
    
    
    
    
//}