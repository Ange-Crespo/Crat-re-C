#include <stdio.h>
#include "initialisation.h"


//__________________________________________________________________________________________________________________________________________
void moyenne(int i,int j,cube tab[][MAX], int n,int m)
{	if(i!=0 and i!=n and j!=0 and j!=m){
    
		tab[i][j].moyenne_autour_actuel=(tab[i][j+1].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i+1][j].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i-1][j-1].niveau_actuel+tab[i+1][j+1].niveau_actuel+tab[i-1][j+1].niveau_actuel+tab[i+1][j-1].niveau_actuel))/7;
	
	}
	
	else {//les coins et les côtés
		
		if(i==0){
				if(j!=0 and j=!m){//côté haut
					
				tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j+1].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i+1][j].niveau_actuel+0.5*(tab[i+1][j+1].niveau_actuel+tab[i+1][j-1].niveau_actuel))/5;
		
				}
				else{
					
					if(j==0){//coin haut gauche
						
						tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j+1].niveau_actuel+tab[i+1][j].niveau_actuel+0.5*(tab[i+1][j+1].niveau_actuel))/3.5;
		
					}
					
					else{//coin haut droite
						
						tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i+1][j].niveau_actuel+0.5*(tab[i+1][j-1].niveau_actuel))/3.5;
		
						
					}
				}
		}
		if(i==n){
			
			if(j!=0 and j!=m){//côté bas
			
				tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j+1].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i-1][j-1].niveau_actuel+tab[i-1][j+1].niveau_actuel))/5;
	
			}
				else{
					
					if (j==0){//coin bas gauche
						
						tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j+1].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i-1][j+1].niveau_actuel))/3.5;
	
						
					}
					
					else{//coin bas droite
						
						tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i-1][j-1].niveau_actuel))/3.5;
	
						
					}
				}
				
			
			
		}
		
		else{
			
			if(j==0){//côté gauche
				
				tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j+1].niveau_actuel+tab[i+1][j].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i+1][j+1].niveau_actuel+tab[i-1][j+1].niveau_actuel))/5;
	
			}
			
			else{//côté droit
				
				tab[i][j].moyenne_autour_actuel=(tab[i][j].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i+1][j].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i+1][j-1].niveau_actuel+tab[i-1][j-1].niveau_actuel))/5;
	
			}
		}
		
	}
return;
}

//__________________________________________________________________________________________________________________________________________

void niveau_futur(int i, int j,cube tab[][MAX], int n, int m)//n et m inutiles ici
{
	
	if (tab[i][j].moyenne_autour_actuel<tab[i][j].niveau_actuel){
		
		tab[i][j].niveau_a_atteindre=tab[i][j].moyenne_autour_actuel-tab[i][j].energy //définir une fonction cool pour prendre en compte l'énergie
		
	}
	
	else{
		
		tab[i][j].niveau_a_atteindre=tab[i][j].moyenne_autour_actuel-tab[i][j].energy //définir une fonction cool pour prendre en compte l'énergie
		
	}
	
	return;
}

float exp_suiv(float a, int k)//exp(ka+epsilom) pour l'instant pas utilisé
{
	
	
	return
	
}

float energy_suiv_time(float a){//modélisation de l'énergie linéaire
	
	a=a-2;
	
	if (a<seuil){
		
		a==0;
		
	}
	
	return a;
}


//__________________________________________________________________________________________________________________________________________

void energizer_point(int i, int j,cube tab[][MAX],int n, int m){
	//l'energie est fonction du temps et de l'espace! on simule l'arrivé d'une métorite très fine (sur un seul point) seul le temps agit
	tab[i][j].energy=energy_suiv_point(tab[i][j].energy);
	
	
	return;
}

//__________________________________________________________________________________________________________________________________________

void mise_jour_tab(cube tab[][MAX],n,m){
	
	for(i=0,i<n,i++){
		for(j=0,j<m,j++){
			
			
		}
		
	}
	
}


//TEST exeption__________________________________________________________________________________________________________________________________________
/*if(i!=0 and i!=50 and j!=0 and j!=200){
    
		
	}
	
else {//les coins et les côtés
		
		if(i==0){
				if(j!=0 and j=!200){//côté haut
					
					
				}
				else{
					
					if(j==0){//coin haut gauche
						
						
					}
					
					else{//coin haut droite
						
						
					}
				}
		}
		if(i==50){
			
			if(j!=0 and j!=200){//côté bas
				
				else{
					
					if (j==0){//coin bas gauche
						
						
					}
					
					else{//coin bas droite
						
						
					}
				}
				
			}
			
		}
		
		else{
			
			if(j==0){//côté gauche
				
				
			}
			
			else{//côté droit
				
				
			}
		}
		
	}*/
