#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon{
int valeur;
int w ;
Maillon *precedent;
Maillon *suivant;
};
void affichage_d_une_liste( Maillon* );
Maillon*  creation_d_une_liste_inversee( int  );
Maillon*  creation_d_une_liste_ordonnee( int );
void affichage_recursif_d_une_liste( Maillon* l);
void supprimer_le_dernier_element_d_une_liste(Maillon*, int);

int main() {

Maillon *maListe;
printf("\nCreation de la liste inversee 3->2->1-0-NULL\n");
maListe = creation_d_une_liste_inversee(3);

printf("\nparcours  dela liste versee  avec appel de fonction: \n");
affichage_d_une_liste(maListe);
affichage_d_une_liste(maListe);
affichage_d_une_liste(maListe);

printf("\nCreation de la liste  ordonnerr 0->1->2->3->NULL\n");
Maillon *maListe_ordonnee;
maListe_ordonnee = creation_d_une_liste_ordonnee(3);

printf("parcours  dela liste ordonnée avec appel de fonction: \n");
affichage_d_une_liste(maListe_ordonnee);
affichage_d_une_liste(maListe_ordonnee);
affichage_d_une_liste(maListe_ordonnee);

printf("supprimons le dernier element de la liste ordonnée\n");
supprimer_le_dernier_element_d_une_liste(maListe_ordonnee, 10);
printf("Affichage recursif  de la liste ordonnée.... \n");
affichage_recursif_d_une_liste(maListe_ordonnee);
printf("Affichage recursif  de la liste inversée.... \n");
affichage_recursif_d_une_liste(maListe);
return 0;
}

void affichage_d_une_liste( Maillon* l){
while (l != NULL) {
printf("%d -> ", l->valeur);
l = l ->suivant;
}
printf("\n");
}

Maillon*  creation_d_une_liste_inversee( int size ){
Maillon* retour =NULL;
Maillon *x = NULL;
for (int i=0; i< size ;i++) {
	Maillon *e = malloc(sizeof(*e));
	e->valeur = i;
	e->suivant = x;
	x  = e;
}
retour = x;
return retour;
}
Maillon*  creation_d_une_liste_ordonnee( int taille){
Maillon* retour;
Maillon *y = NULL;

for (int i = taille -1; i >= 0 ; i--) {
	Maillon *e = malloc(sizeof(*y));
	e->valeur = i;
	e->suivant = y;
	y = e;
}
retour = y;
return retour;;
}
void supprimer_le_dernier_element_d_une_liste( Maillon* ll, int taille_de_la_liste){
}
void affichage_recursif_d_une_liste( Maillon* l){
if (l != NULL) {
	printf("%d -> ", l->valeur);
	affichage_recursif_d_une_liste(l = l ->suivant);
}
else {
	printf("\n");
     }
}
