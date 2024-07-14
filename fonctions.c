#include <stdio.h>

int somme(int ,int );
float min(float,float);
void affiche( int [], int);
void enregistre(int [], int);
float puissance( int, int);
float moyenne( int[], int);
float forcefloat(int, int);

int main () {
float res_force = forcefloat(3,2);
printf("resulat de forcefloat(3,2)= %f\n", res_force);
int taille = 5;
int notes[taille];
for( int i = 0; i < taille; i++){
	notes[i] =2;
}
float res_moyenne = moyenne(notes,taille);
printf("La moyenne des valeurs du tableau notes est : %f\n", res_moyenne);
notes[0]=1;
notes[1]=6;
notes[2]=9;
notes[3]=13;
notes[4]=17;
res_moyenne = moyenne(notes,taille);
printf("La moyenne des valeurs du tableau notes  nouveau est : %f\n", res_moyenne);
/*float res = puissance (2,3);
printf("Valeur de 2 puissance 3 %f\n", res );
res = puissance (3,3);
printf("Valeur de 3 puissance 3 %f\n", res );
res = puissance (2,4);
printf("Valeur de 2 puissance 4 %f\n", res );
int taille = 5;
int tb[5];
enregistre(tb, taille);	
affiche (tb,taille);
printf("\n");

int a,b;
printf("Valeur de a ?");
scanf("%d",&a);
printf("Valeur de b ?");
scanf("%d",&b);
printf("La somme de a + b est : %d\n", (a+b) );
printf("La somme de a + b est : %d\n",somme(a,b) );
printf(" Le min de a et b est : %f\n", min(a,b) );
printf(" Le min de %d et %d est : %f\n", a, b,  min(a,b) );*/
return 0;
}

int somme(int a ,int b ){
  int somme = 0;
  somme = a + b;

return somme;
}

float min(float a,float b){
float min;
if ( a > b ) {
	min = b;
}
else {
	min = a;
}
return min;
}

void affiche( int tb[], int taille){
	for( int i = 0; i < taille; i++) {
	printf(" %d", tb[i]);
}

}
void enregistre(int tb[], int taille){
for ( int i = 0; i < taille; i++) {
	scanf("%d", &tb[i]);
}

}

float puissance( int x, int y){
printf("la fonction puissance est appelée avec x= %d et y = %d\n\n", x , y);

int res = x;
for( int i = 1; i < y; i++) {
	printf("Dans la boucle i = %d\n ", i);
	res *= x;
	printf("x = %d\n", x);
	printf("res = %d\n", res);
} 
return res;
}
float moyenne( int notes[], int taille){
printf("Appel de la fonction moyenne avec comme valeurs:\n[");
for( int i = 0; i < taille; i++){
	printf("%d\t", notes[i]);
}
printf("]\n");
int somme = 0;
float moyenne = 0;

for(int i = 0; i <taille; i++) {
	somme += notes[i];
}
moyenne = somme / taille;
return moyenne;
}
float forcefloat(int numerateur, int denominateur ){
	return (float)  numerateur / denominateur;
}
