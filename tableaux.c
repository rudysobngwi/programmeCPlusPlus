#include <stdio.h>
#include <stdlib.h>
int main () {
/*
float t[6];
int i;
int perdu = 0;
printf("sizeof(int) = %ld\n", sizeof(int));
printf("sizeof(t) = %ld\n", sizeof(t));
printf("sizeof(float) = %ld\n", sizeof(float));
	scanf("%d", &perdu);
printf("perdu == %d\n", perdu);
for (i = 0; i < sizeof(t)/sizeof(float); i++) {
	printf("Saisissez la valeur %d : \t",( i + 1));
	scanf("%f", &t[i]);

}
float t1[]  = {12,13,14,15,16,17};
printf("Affichons les valeurs lues\n");
for (i = 0; i < sizeof(t1)/sizeof(float); i++) {
	printf(" Valeur %d : %.2f\n", (i+1), t1[i]);
}

float t2[] = {1, 100, 200, 300, 400};
//int a;

int taille_t2 = sizeof(t2) / sizeof(float);
printf(" Taille de t2 = %d\n", taille_t2);
for (int a = taille_t2 -1; a >= 0; a--) {
	printf(" %f\t", t2[a]);
} 
printf("\n");
float t3[] = {2, 12,18,3,9, 30, -1, 13, 12};
int taille_t3 = sizeof(t3) / sizeof(float);
float max = t3[0];
for (int a = 0; a < taille_t3; a++) {
//	printf (" Valeur des elements du tableau : %f",t2[a]); 
      if ( max < t3[a+1]) {
	max = t3[a+1];
	printf(" Le max est %f\n", max);
	}
} 
float t4[taille_t3] ; 
//int b = 0;
for(int a = taille_t3-1, b = 0  ; a >= 0; a--) {
	t4[b] = t3[a]; 
	b++;
}

printf("Imprimons le tableau t3 \n");
for ( int a = 0 ; a < taille_t3 ; a ++ ){
 printf ("%f \t ", t3[a]);
}


printf("\n");
printf("Imprimons le tableau t4 \n");
for ( int a = 0 ; a < taille_t3 ; a ++ ){
 printf ("%f \t ", t4[a]);
}
printf("\n");

for ( int a = 0 ; a < taille_t3 ; a ++ ){
 	t3[a] = t4[a];
}
printf("Imprimons a nouvaeu  le tableau t3 \n");
for ( int a = 0 ; a < taille_t3 ; a ++ ){
 printf ("%f \t ", t3[a]);
}
printf("\n");
*/
int taille;
float* Tab;
float t4[5] ; 
printf("taille de t4 = %ld \n", sizeof(t4));
printf("taille du tableau non initailisé  %ld \n", sizeof(Tab));
printf("\n Saisissez le nombre de cases du tableau: \t");
scanf("%d", &taille);
printf("taille d un float = %ld \n", sizeof(float));
printf("contenu de taille %d \n", taille);
Tab = malloc(taille * sizeof(float));
printf("taille du tableau %ld \n", sizeof(Tab));

for(int i = 0; i<taille; i++) {
printf(" Saisissez la valeur %d : \t", i);
scanf("%f", &Tab[i]);
}
printf("taille du tableau  a nouveau %ld \n", sizeof(Tab));

for (int i = 0; i<taille; i++) {
	printf("%d:%.2f\t", i, Tab[taille]);
}
printf("\n");
free(Tab);
printf("taille du tableau  apres le free %ld \n", sizeof(Tab));

return 0;
}
