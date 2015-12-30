#include <stdio.h>
#include "initialisation.h"


//__________________________________________________________________________________________________________________________________________
void moyenne(int i,int j,cube tab[][MAX], int n,int m)
{
    tab[i][j].moyenne_autour_actuel=(tab[i][j+1].niveau_actuel+tab[i][j-1].niveau_actuel+tab[i+1][j].niveau_actuel+tab[i-1][j].niveau_actuel+0.5*(tab[i-1][j-1].niveau_actuel+tab[i+1][j+1].niveau_actuel+tab[i-1][j+1].niveau_actuel+tab[i+1][j-1].niveau_actuel))/6;
return;
}

void niveau_futur(int i, int j,cube tab[][MAX], int n, int m)
{
	
	if (tab[i][j].moyenne_autour_actuel<tab[i][j].niveau_actuel){
		
		tab[i][j].niveau_a_atteindre=tab[i][j].moyenne_autour_actuel-tab[i][j].energy //définir une fonction cool pour prendre en compte l'énergie
		
	}
	
	else{
		
		tab[i][j].niveau_a_atteindre=tab[i][j].moyenne_autour_actuel-tab[i][j].energy //définir une fonction cool pour prendre en compte l'énergie
		
	}
	
	return;
}

float exp_suiv(float a, int k)//exp(ka+epsilom)
{
	
	
	return
	
}

float energy_suiv_time(float a){
	
	a-2;
}


void energizer_point(int i, int j,cube tab[][MAX],int n, int m){
	//l'energie est fonction du temps et de l'espace! on simule l'arrivé d'une métorite très fine (sur un seul point) seul le temps agit
	tab[i][j].energy=exp_suiv(tab[i][j].energy);
	
	
	return;
}