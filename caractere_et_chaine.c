#include <stdio.h>
#include <string.h>

int main () {

char L1;
char L2;
char buffer;

printf("Saisissez une lettre \n");
scanf("%c",&L1);
scanf("%c", &buffer);
printf("Saisissez une lettre \n");
scanf("%c",&L2);

printf(" lettre 1 %c\n", L1);
printf(" lettre 2 %c\n", L2);

char chaine[] = "Rudy"; 
printf("La chaine est : %s\n", chaine); 
char prenom [30];
printf("Entrez un prenomm : \n");
scanf("%s",&prenom[0]);
printf("Le prenom est : %s\n",prenom); 
int taille_du_prenom = strlen(prenom);
printf("la taille du prenom est : %d\n",taille_du_prenom); 
char *trouver = strchr(chaine, 'u' );
printf(" trouver = %c\n", *trouver);
char *nontrouver = strchr(chaine, 'o' );
//printf(" nontrouver = %c\n", *nontrouver);
struct Date{
int jour;
int mois;
int annee;
};

struct Date date_de_naissance_rudy;
date_de_naissance_rudy.jour = 31;
date_de_naissance_rudy.mois = 1;
date_de_naissance_rudy.annee = 2004;
printf(" Rudy est ne le : %d-%d-%d\n",date_de_naissance_rudy.jour, date_de_naissance_rudy.mois, date_de_naissance_rudy.annee);


enum Couleurs {Bleu, Blanc, Rouge};
enum Couleurs blanc = Blanc;
printf(" Couleur blanc = %d\n", blanc);
typedef enum Couleurs Couleurs;
Couleurs rouge = Rouge;
printf(" Couleur rouge = %d\n", rouge);
typedef struct Date Date;
Date date_de_naissance_AG;
date_de_naissance_AG.jour = 10;
date_de_naissance_AG.mois = 8;
date_de_naissance_AG.annee = 2007;
printf(" AG est ne le : %d-%d-%d\n",date_de_naissance_AG.jour, date_de_naissance_AG.mois, date_de_naissance_AG.annee);

return 0;

}
