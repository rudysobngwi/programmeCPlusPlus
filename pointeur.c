#include <stdio.h>
#include<stdlib.h> 

int main () {

int a = 5;
int *p = NULL;
int *q = NULL;
printf(" taille d un int = %d\n", sizeof(int) );
printf(" adresse de p = %d et q = %d\n", &p, &q);

p = &a;
printf(" adresse de p = %d et q = %d\n", &p, &q);
q = p + 1;
printf(" adresse de p = %d et q = %d\n", &p, &q);
printf(" adresse de p = %p et q = %p\n", &p, &q);
int *r = q +1;
printf(" adresse de p = %d et q = %d et r = %d\n", &p, &q, &r);
printf("Difference enetre p et q ie p - q = %d\n", (p - q )); 
printf("Difference enetre p et q ie p - q = %d\n", (q - p )); 

int t[5] = {10, 11, 12, 13, 14};
int *p1 = t;
printf(" t[0] = %d, et par pointeur = %d\n", t[0], *p1);
printf(" t[1] = %d, et par pointeur = %d\n", t[1], (*p1+ 1));
printf(" t[2] = %d, et par pointeur = %d\n", t[2], (*p1+ 2));
printf(" t[2] = %d, et par pointeur_tab = %d\n", t[2], p1[2]);

for( int i = 0; i < 5; i++, p1++ ) {
	printf("%d\t", *p1);
}
printf("\n");

char rr[4]  = {'R', 'u', 'd', 'y'};
char *prr = "Rudy SOBNGWI";
for( int i = 0; prr[i] != '\0'   /*13*/ /*sizeof(prr)/sizeof(char)i*/; i++/*, prr++*/ ) {
	printf("%c\t", prr[i]);
}
printf("\n");
// Déclaration d'un pointeur P sur Entier
int* P = NULL;
printf("Adresse de P avant malloc : %p \n", &P);
printf("Adresse pointée par P avant malloc : %p \n\n", P);
// on ne peut pas écrire cette ligne là pour le moment : printf("Contenu pointé par P 
//avant malloc: %d \n\n", *P);
// Allocation de mémoire
P = malloc(sizeof(int)); 
printf("Adresse de P après malloc : %p \n", &P);
printf("Adresse pointée par P après malloc: %p \n", P);
printf("Contenu pointé par P après malloc: %d \n\n", *P);
if (P != NULL)
{
printf("Quel est votre prix ? ");
scanf("%d", P);
printf("Avant libération de la mémoire : \n\n");
printf("Adresse de P : %p \n", &P);
printf("Adresse pointée par P après saisie : %p \n", P);
printf("Contenu pointé par P après saisie : %d \n\n", *P);
}
// Libération de mémoire
free(P); 
printf("Après libération de la mémoire : \n\n");
printf("Adresse de P : %p \n", &P);
printf("Adresse pointée par P après libération : %p \n", P);
printf("Contenu pointé par P après libération : %d \n", *P);

// exo 2
int Nb = 0;
int i ;
int* Prix = NULL; 
printf("Nombre de prix à saisir ? ");
scanf("%d", &Nb);
if (Nb > 0) 
{
Prix = malloc (Nb * sizeof(int)); 
if (Prix != NULL) 
{
for (i = 0 ; i < Nb ; i++)
{
printf("Prix numéro %d ? \n ", i + 1);
scanf("%d", &Prix[i]);
}
printf("Prix saisis :\n");
for (i = 0 ; i < Nb ; i++){
printf("%d \n", Prix[i]);
}
printf("\n");
free(Prix);
}
}

return 0;
}
