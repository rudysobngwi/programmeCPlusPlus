#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ecrire_un_caractere_dans_un_fichier(char *, FILE *);
void lire_un_caractere_dans_un_fichier( FILE *);
int main () {
FILE *pointeur_vers_fichier_toto = NULL;
FILE *pointeur_vers_fichier_tata = NULL;
char *nom_du_fichier_toto = "toto.txt";
char *nom_du_fichier_tata = "tata.txt";
pointeur_vers_fichier_toto = fopen(nom_du_fichier_toto, "w"); 
pointeur_vers_fichier_tata = fopen(nom_du_fichier_tata, "w"); 
char *rudy = "Rudy";
char fin_de_ligne = '\n';
/*for ( int i = 0; i < strlen(rudy); i++) {
	fputc(rudy[i], pointeur_vers_fichier_toto);
}*/
ecrire_un_caractere_dans_un_fichier(rudy ,pointeur_vers_fichier_toto);

fputc(fin_de_ligne, pointeur_vers_fichier_toto);
char *AG = "Anne_Gaelle";
/*for ( int i = 0; i < strlen(AG); i++) {
	fputc(AG[i], pointeur_vers_fichier_toto);
}*/
ecrire_un_caractere_dans_un_fichier(AG ,pointeur_vers_fichier_toto);
fputc(fin_de_ligne, pointeur_vers_fichier_toto);
char *alain = "Alain";
ecrire_un_caractere_dans_un_fichier(alain ,pointeur_vers_fichier_toto);
ecrire_un_caractere_dans_un_fichier(alain ,pointeur_vers_fichier_tata);
/*for ( int i = 0; i < strlen(alain); i++) {
	fputc(alain[i], pointeur_vers_fichier_toto);
}*/
//fputs(alain, pointeur_vers_fichier_toto);
//fputs("Alain", file);
fputs("\n", pointeur_vers_fichier_toto);
//fputc('\n', file);)
//
fclose(pointeur_vers_fichier_toto);
fclose(pointeur_vers_fichier_tata);
FILE *pointeur_vers_fichier_toto_en_lecture  = fopen(nom_du_fichier_toto,"r");
lire_un_caractere_dans_un_fichier(pointeur_vers_fichier_toto_en_lecture);
FILE *pointeur_vers_fichier_tata_en_lecture  = fopen(nom_du_fichier_tata,"r");
lire_un_caractere_dans_un_fichier(pointeur_vers_fichier_tata_en_lecture);

return 0;
}
void ecrire_un_caractere_dans_un_fichier(char * chaine_a_ecrire, FILE * pointeur_vers_le_fichier){
/*for ( int i = 0; i < strlen(chaine_a_ecrire); i++) {
	fputc(chaine_a_ecrire[i], pointeur_vers_le_fichier);
}*/
	fputs(chaine_a_ecrire, pointeur_vers_le_fichier);

}

void lire_un_caractere_dans_un_fichier( FILE * pointeur_vers_le_fichier){
FILE *pointeur_vers_fichier_log  = fopen("fichier.log","r+");
	printf("-----Debut de lecture du fichier ---------\n");
	int caratere_lu = 100;
	do {
          	caratere_lu =  fgetc(pointeur_vers_le_fichier);
		if ( caratere_lu != EOF ){
		printf("%c", caratere_lu);
		fprintf(pointeur_vers_fichier_log, "%c", caratere_lu);
		}
	} 
	while( caratere_lu != EOF );
	printf("\n");
	printf("-----Fin de lecture du fichier ---------\n");
	fclose(pointeur_vers_fichier_log);

}
