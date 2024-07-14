#include <stdio.h>

int main () {
int a;

printf("Saisir un entier inférieur ou égal à 100:");
scanf("%d", &a);

while (a>100) {
	printf("Merci de saisir un entier inférieur ou égal à 100 :\n");
	scanf("%d", &a);
}
	printf("Bravo! %d<=100\n",a); 
	return 0;
}
