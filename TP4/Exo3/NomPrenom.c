#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>



int main() {
	char nom[20];
	char prenom[20];
	char sexe;

	printf("Êtes vous une femme ou un homme ? F/H\n");
	sexe = _getch();  
	sexe = toupper(sexe);

	printf("veuillez saisir votre nom :\n");
	scanf_s("%s", &nom, (unsigned)_countof(nom));

	printf("Veuillez saisir votre prénom :\n");
	scanf_s("%s", &prenom, (unsigned)_countof(prenom));


	if (sexe == 'H') {
		printf("Monsieur %s %s", prenom, nom);
	}
	else {
		printf("Madame %s %s", prenom, nom);
	}
}