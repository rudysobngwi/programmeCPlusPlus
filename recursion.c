#include <stdio.h>

int factorielle (int );
int n_premier_nombre_entiers(int );
void affiche_element_tableau( int[],  int);
int fibo( int) ;
int main () {
printf("Resultat de fibo 5 =%d\n\n",fibo(5) );
printf("Resultat de fiboi 10 =%d\n\n",fibo(10) );
printf("Resultat de fiboi 11 =%d\n\n",fibo(11) );

int tb[] = {56,13,19,15};
int taille_tb = sizeof(tb)/sizeof(int);
printf("taille de tb = [%d]\n", taille_tb);
affiche_element_tableau( tb, taille_tb);
//printf("resultat de facto de 0 : %d\n", factorielle (0));
//printf("resultat de facto de 1 : %d\n", factorielle (1));
//printf("resultat de facto de 2 : %d\n", factorielle (2));
//printf("resultat de facto de 3 : %d\n", factorielle (3));
printf("resultat de facto de 4 : %d\n", factorielle (4));
/*printf("resultat de facto de 5 : %d\n", factorielle (5));
*/

printf("resultat la somme des 4 premiers nombres entiers : %d\n",n_premier_nombre_entiers(4));
printf("resultat la somme des 6 premiers nombres entiers : %d\n",n_premier_nombre_entiers(6));
return 0;
}
int factorielle (int n){
printf("\nfactorielle est appelé avec l argument n = [%d] \n", n);
int facto = 1;
if ( ( n == 0) || (n == 1) ){
	facto = 1;
	return facto;
}
/*for ( int i = 1; i <= n; i++) {
	facto *= i;

} */
facto = n * factorielle(n-1);
return facto;
}

int n_premier_nombre_entiers(int n){
int somme = 0;
/*for( int i = n-1; i >= 0; i--) {
	somme += i;
}*/
if ( ( n == 0) || (n == 1) ) {
	return 0;
}
somme = n_premier_nombre_entiers ( n-1) + (n-1);
return somme;
}

void affiche_element_tableau( int tb[], int taille_tb){
//printf("taille de tb  dans fonction = [%d]\n", taille_tb);
//printf("[");
/*for ( int i = 0; i < taille_tb; i++) {
	printf(" %d ", tb[i]);
}*/
if ( taille_tb == 1) {
	printf("%d\t", tb[0]);
//	return ;
}
else  {
	printf("%d\t", tb[taille_tb -1 ]);
	affiche_element_tableau(tb, (taille_tb -1));
}

//printf("]\n");
}
int fibo( int n){

if ( n == 0 ) {
return 0;
}
if ( n == 1 ) {
return 1;
}
int res = 0; 
res += fibo(n-1) + fibo(n-2) ;

return res;
}
