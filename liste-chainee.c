#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Eleve Eleve;
struct Eleve{
char identifiant;
char *nom;
Eleve* ptr_vers_un_eleve;
};

char* toString(Eleve);
void affiche(Eleve*);

int main(){

Eleve* rudy = malloc(sizeof(Eleve));
rudy->identifiant = '0'; 
rudy->nom = "SOBNGWI Rudy";
rudy->ptr_vers_un_eleve = malloc(sizeof(rudy));

Eleve* AG = malloc(sizeof(Eleve));
AG->identifiant = '1'; 
AG->nom = "SOBNGWI Anne Gaelle";
AG->ptr_vers_un_eleve = NULL;
rudy->ptr_vers_un_eleve = AG;

printf("Rudy = %s\n", toString(*rudy));
printf("AG  = %s\n", toString(*AG));
printf(" affichage recursif ------------\n");
affiche(rudy);
printf("Affiche avec la boucle for \n");
for ( Eleve* eleve = rudy; eleve != NULL ; eleve = eleve->ptr_vers_un_eleve ){
	printf("Eleve : %s\n", toString(*eleve));
}
printf("Affiche avec la boucle while \n");
while ( rudy != NULL ){
	printf("Eleve = %s\n", toString(*rudy));
	rudy = rudy->ptr_vers_un_eleve;
}

return 0;
}

char* toString(Eleve eleve){
char*  retour = malloc(sizeof(char)*35);
retour[0] = eleve.identifiant;
retour[1] = '|';
for ( int i = 2; i < strlen(eleve.nom) + 2  ; i++){
	retour[i] = eleve.nom[i -2];	
}
return retour;
}

void affiche(Eleve* eleveptr){
	if ( eleveptr == NULL ){
	printf("Pas  ou plus d eleve à afficher...\n");
	}
	else {
	 printf("ELEVE = [%s]\n", toString(*eleveptr));
	 printf("Eleve ::: nom : %s  -- identifiant : %c \n", eleveptr->nom, eleveptr->identifiant);
	 affiche(eleveptr->ptr_vers_un_eleve);
	}

}
