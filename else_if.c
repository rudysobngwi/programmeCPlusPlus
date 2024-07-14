#include <stdio.h>

int main () {
int choix;
printf("\n1 : Café court non sucré \n2 : Café court sucré \n3 : Café long non sucré \n4: Café long sucré \nVeuillez saisir votre choix de boisson : ");

scanf("%d", &choix);

	switch (choix) {
	case 1 : printf(" Café court non sucré\n");
		break;
	case 2 : printf(" Café court sucré\n");
		break;
	case 3 : printf(" Café long non sucré\n");
		break;
	case 4 : printf(" Café long sucré\n");
		break;
	default : printf("Choix de boisson non valide\n");	
	}

	scanf("%d", &choix);
	if ( choix == 1 ) {
		 printf(" Café court non sucré\n");
	}
	else if ( choix == 2 ) {
		printf(" Café court sucré\n");
	}
	else if ( choix == 3 ) {
		printf(" Café long non sucré\n");
	}
	else if ( choix == 4 ) {
		printf(" Café long sucré\n");
	}
	else {
		printf("Choix de boisson non valide\n");
	}

	
	return 0;
}
