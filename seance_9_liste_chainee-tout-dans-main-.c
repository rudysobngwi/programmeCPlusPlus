#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon{
int valeur;
Maillon *suivant;
};

int main() {
Maillon *debut = malloc(sizeof(*debut));
debut -> valeur = 1000;
printf("Liste debut->valeur : %d\n", debut->valeur);
printf("On souhaite creer : 3→2→1→0→NULL \n");

Maillon *maListe;
Maillon *maListebis;
Maillon *element = malloc(sizeof(*element));
element->valeur = 0;
element->suivant=NULL;
maListe = element;
for (int i=1; i<4;i++) {
	Maillon *e = malloc(sizeof(*element));
	e->valeur = i;
	e->suivant = NULL;
	e->suivant = maListe;
	maListe = e;
}
printf("Parcours de la liste ...  \n");
maListebis = maListe;
while (maListebis != NULL) {
printf("%d -> ", maListebis->valeur);
maListebis = maListebis->suivant;
}
printf("-> NULL\n");
printf("\nCreation de la liste 0->1->2->3->NULL\n");
Maillon *premier_element = malloc(sizeof(*element));
premier_element->valeur = 3;
premier_element->suivant=NULL;
Maillon *maListe_ordonnee;
maListe_ordonnee = premier_element;
for (int i=2; i >= 0; i--) {
	Maillon *e = malloc(sizeof(*premier_element));
	e->valeur = i;
	e->suivant = NULL;
	e->suivant = maListe_ordonnee;
	maListe_ordonnee = e;
}
premier_element = NULL;

printf("\nParcours de la liste ordonnée...  \n");
Maillon *maListe_ordonne_bis;
maListe_ordonne_bis = maListe_ordonnee;
while (maListe_ordonne_bis != NULL) {
printf("%d -> ", maListe_ordonne_bis->valeur);
maListe_ordonne_bis = maListe_ordonne_bis->suivant;
}
printf("->NULL\n");
return 0;
}
