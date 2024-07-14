#include <stdio.h>

int main () {
	float note;
	printf("Saisissez votre note :\n");
	scanf("%f", &note);
	
if (note>=10){
	printf("Bravo !\nAvec %2.f, vous etes reçu.\n", note);
		}
else {
	printf("Désolé !\nAvec %2.f, vous n'etes pas reçu.\n", note);
}
	return 0;
}
