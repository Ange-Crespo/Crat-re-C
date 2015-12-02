#include<stdio.h>
#include"affichage.h"




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
