#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>



int main() {
	char mot[1024];
	int i = 0;
	int taille = 0;
	int nbremot = 1;
	float moyenne = 0;
	printf("veuillez saisir votre phrase :\n");
	gets_s(mot, 1023);
	taille = strlen(mot);

	for (i = 0; i < 1024; i++) {
		if ((mot[i] == ' ')||( mot[i]=='\'')) {
			nbremot++;
			taille--;
		}
	}
	moyenne = taille / nbremot;
	printf("Il y a %d mots\n", nbremot);
	printf("il y %d caractères\n", taille);
	printf("La longueur moyenne des mots est de : %.f lettres \n",moyenne);
}