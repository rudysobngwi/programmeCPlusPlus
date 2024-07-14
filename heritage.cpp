#include<iostream> 
#include<string> 
using namespace std; 

class Parent { 
public : int Age; 
string Prenom; 
Parent (int a, string b) 
{ 
Age= a; 
Prenom = b; 
} 
string toString () {
  string retour = "Parent P : " + Prenom;
         retour += " " ;
         retour += std::to_string(Age) ;
         return retour;

}
}; //fin classe Parent
class Enfant : public Parent 
{ 
string NivClasse;
// Constructeur de la classe Enfant
public : Enfant (int a, std::string b, string c) : Parent(a,b)
{
Age = a;
Prenom = b;
NivClasse = c;
} 
string toString () {
  std::string retour = "Enfant E : " + Prenom;
         retour += " " ;
         retour += std::to_string(Age) ;
         retour += " " ;
         retour += NivClasse ;
         return retour;

}
public : void Jouer() {
	cout << "Je joue !" << endl;
} 
}; // fin classe Enfant
class Produit {
string ref;
string lib;
double prix_ht;
int stock_en_cours;
int stock_min;
public : Produit (string ref, string lib, double prix_ht, int stock_min, int stock_en_cours)
{ 
this->ref=ref;
this->lib=lib;
this->prix_ht=prix_ht;
this->stock_min=stock_min;
this->stock_en_cours=stock_en_cours;
}

public : void Affiche() {
cout << "Ref : " << this->ref << endl;
cout << "Libelle : " << this->lib << endl;
cout << "Prix HT : " << this->prix_ht << endl;
cout << "Stock Actuel : " << this->stock_en_cours << endl;
cout << "Stock mini : " << this->stock_min << endl;
}
public : int Stock_Dispo() {
	return stock_en_cours;
}
public : void Vendre(int nombre) {
	stock_en_cours = nombre;
}
public : void Stocker(int nombre) {
	stock_en_cours += nombre;
}
public : bool Est_Dispo() {
if ( stock_en_cours > 0) {
	return true;
}
	return false;
}
public : int Commander(){
	return (stock_en_cours - stock_min);
}
};
int main() { 
Parent P1(32,"Eric"); 
Enfant E1(10, "Fanny", "classe de CM2"); 
Produit Produit1("AE2456","Cahier Spirale 24", 89, 2, 8); 
Produit1.Affiche();
//Enfant E2(5, "Fanny"); 
/*cout<<" Parent P1 : "<<P1.Prenom <<" "<< P1.Age<<" ans"<<endl; 
cout<<" Enfant E1 : "<<E1.Prenom<<" "<<E1.Age<<" ans"<<endl; 
cout << "------------------------------------------"<< endl; */
cout <<P1.toString() << endl;
cout <<E1.toString() << endl;
E1.Jouer(); 
//Affiche();
//cout <<E2.toString() << endl;
}
