#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

typedef struct Eleve Eleve;
struct Eleve{
char identifiant;
char *nom;
Eleve* ptr_vers_un_eleve;
};

char* toString(Eleve);
void affiche(Eleve*);

int main(){

Eleve* rudy =  new (Eleve);
rudy->identifiant = '0'; 
rudy->nom = "SOBNGWI Rudy";
rudy->ptr_vers_un_eleve = new (Eleve);

Eleve* AG = new (Eleve);
AG->identifiant = '1'; 
AG->nom = "SOBNGWI Anne Gaelle";
AG->ptr_vers_un_eleve = NULL;
rudy->ptr_vers_un_eleve = AG;
cout << "Rudy = " << toString(*rudy) << "\n";
cout << "AG  = "  << toString(*AG) << endl;
cout << "Affichage recursif ------------" << "\n";
affiche(rudy);
cout << endl <<  "Affiche avec la boucle for " << endl;
 for ( Eleve* eleve = rudy; eleve != NULL ; eleve = eleve->ptr_vers_un_eleve ){
	cout << "Eleve : " <<  toString(*eleve) << endl;
}
cout << endl << "Affiche avec la boucle while " << endl;
while ( rudy != NULL ){
	cout << "Eleve = " <<  toString(*rudy) <<endl;
	rudy = rudy->ptr_vers_un_eleve;
}

return 0;
}

char* toString(Eleve eleve){
char*  retour = (char*)  malloc(30);
retour[0] = eleve.identifiant;
retour[1] = '|';
for ( int i = 2; i < strlen(eleve.nom) + 2  ; i++){
	retour[i] = eleve.nom[i -2];	
}
return retour;
}

void affiche(Eleve* eleveptr){
	if ( eleveptr == NULL ){
	cout << "Pas  ou plus d eleve à afficher..." << endl;
	}
	else {
	 cout << "ELEVE = " <<  toString(*eleveptr) << endl;
	 cout << "Eleve ::: nom : " << eleveptr->nom << "  -- identifiant :" << eleveptr->identifiant << endl;
	 affiche(eleveptr->ptr_vers_un_eleve);
	}

}
