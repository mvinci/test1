#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h
#include <conio.h>

int main(void){
	int i = 0;
	int nombre_aleatoire = 0;
	
	
	/* TEST COMMIT */
	for(i=0; i<50; i++){
		nombre_aleatoire = rand()%1001;
		printf("%d \n",nombre_aleatoire);
	}
	do{
        printf("\rAppuyer sur une touche");
      }while (kbhit()==0); // on garde la main en scrutant le clavier.
	return 0;
}
