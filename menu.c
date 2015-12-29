#include <stdio.h>
#include "timecrat.h"
#include "affichage.h"
#include "action.h"
#include "initialisation.h"

void choix(){

 // premet d'afficher à tout moment le menu et donc de mettre en pause l'automate ( doit relancer l'execution de l'automate à la fin de son execution

printf("1. calcul au temps t \n2. afficher l'automate au temps t courant \n");
printf("3. calculer et afficher entre t0 et t1 \n4. Cadrage\n");
printf("5. Mode édition de sol\n7. Sauver la configuration\n7. Charger une configuration\n8. Quitter\n9. Mode pas a pas\n10. Mode édition de météores\n");
}



void menu(){

int choa;

choix();
scanf("%d",&choa);

switch(choa){
	case 1 : 
	time_init();
	break;

	case 2 :
	time_end();
	break;

	case 3:
	time_all();
	break;

	case 4
	cadrage();
	break;

	case 5:
	sol_edit();
	break;

	case 6:
	metor_edit();
	break;

	case 7:
	save_config();
	break;

	case 8:
	load_config();
	break;
	
	case 9 :
	mode_pas_a_pas();
	break;
	
	
	case 10: 
	exit();
	break;
	}
return;
}


int main(){
	
	
	menu();
	
return 0;	
}