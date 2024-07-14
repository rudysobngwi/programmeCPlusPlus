#include <cstdio> 
#include <cstdlib> 
#include <iostream> 
using namespace std; 

class Point { 
/*Variables d'instance*/ 
private : int x; int y; int z; 

public : Point(int x, int y, int z) {
this->x = x;
this->y = y;
this->z = z;

}
public : Point() {
this->x = 1;
this->y = 1;
this->z = 1;

}
/*méthodes*/ 
public : static bool Compare(int a, int b) {
/*if ( a == b) {
	return true;
}
	return false; */
 return (a==b) ? true : false;
} 
public : void Saisie () { 
/*cout << " Saisir l'abscisse du point " << endl; 
cin >> this->x; 
cout << " Saisir l'ordonnee du point " << endl; 
cin >> this->y; 
cout << " Saisir la cote du point " << endl;
cin >> this->z; */
this->x = 2;
this->y = 4;
this->z = 3;
} 
public : void Affiche () { 
cout <<"Abscisse : " << this->x << "\n"; 
cout <<"Ordonnee : " << this->y << "\n"; 
cout <<"Cote : " << this->z << "\n"; 
} 
 double Somme (int a, int b) {
	  return (double) a+b;
	  }

  double Somme (double a, double b) {
	  return a+b;
	  }
  double Somme (int a, int b , int c) {
	  return (double) a+b+c;
	 }
public : void  setX (int x) {
	this->x = x;
}
public : int  getX (int x) const {
	return this->x;
}

}; /*fin de la classe point*/ 

class Entreprise {
private:
int CA;
public:
// Setter Set_CA
void Set_CA(int New_CA) {
 CA = New_CA;
}
// Getter Get_CA
int Get_CA() {
 return CA;
}
}; //fin de classe entreprise

int main() { 
//Déclaration d'une instance de la classe 
Point Omega(2,4,3); 
//appel des méthodes 
Omega.Saisie(); 
Omega.Affiche(); 
cout <<  Omega.Somme(100, 200) << endl;
Point rudy(6,7,8);
rudy.Affiche();
rudy = Point(10, 11, 12);
rudy.Affiche();
rudy = Point();
rudy.Affiche();

//delete Omega;
int *Tab = new int [100];
delete [] Tab;
Entreprise Ma_Boite;
Ma_Boite.Set_CA(1000000);
 cout << "Le chiffre d'affaire en euros est de : " << Ma_Boite.Get_CA() << endl;
cout << Point::Compare( 2, 4) << endl;
cout << Point::Compare( 4, 4) << endl;
return 0;
}
