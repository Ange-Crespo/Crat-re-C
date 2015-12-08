#include <stdio.h>
int TIME_INIT;
int TIME_END;
TIME_INIT=0;
TIME_END=1000;


void time_init(){
	
	printf("Début de la simulation prévu à %d ! \n Souhaitez vous modifier cela?",TIME_INIT);
	scanf("%d",&TIME_INIT);
	printf("\n");
}

void time_end(){
	printf("Fin de la simulation prévu à %d ! \n Souhaitez vous modifier cela?",TIME_INIT);
	scanf("%d",&TIME_END);
	printf("\n");
}

void time_all(){
	
	time_init();
	time_end();
	
}