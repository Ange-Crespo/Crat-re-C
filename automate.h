
void init_matrice(int ligne, int colonne);	// creer la matrice initiale pour l'automate cellulaire 

void menu(int* choix); 				// premet d'afficher à tout moment le menu et donc de mettre en pause l'automate ( doit relancer l'execution de l'automate à la fin de son execution 

void quitter_le_programme(); 			// permet a l'utilisateur de stoper l'automate à tout moment 
void sauvegarder_configuration_courante(); 	// sauvegarde la matrice courante dans un fichier
void charger_fichier();				// permet de changer une configuration de l'automate ( une matrice ) demander chemin absolut 
void modifier_cellules();			// permet a l'utilisateur de modifier les cellules de l'automate 
void recadrage(); 				// recadre la console aux coordonnées voulu si affichage plus grand que la console 
void calcul_temps_t();  			// ne fais que le calcul , n'affiche rien 
void affichage_etat_courant(); 			// affiche l'etat actuel de la matrice 
void calculspe_t0_t1();				// sous entend que l'on doit calculer sans afficher de t=0 à t0 en utilisant calcul_temps_t 

