#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
class Produit
{
protected :
string ref;
string lib;
double prix_H_T;
int stock_mini;
int en_stock;
/*constructeur*/
public : Produit (string ref, string lib, double prix_H_T, int stock_mini, int en_stock)
{
this->ref=ref;
this->lib=lib;
this->prix_H_T=prix_H_T;
this->stock_mini=stock_mini;
this->en_stock=en_stock;
}
/*méthodes*/
public : void Affiche ()
{
cout<<"Ref : "<<this->ref<<endl;
cout<<"Libelle : "<<this->lib<<endl;
cout<<"Prix H.T. : "<<this->prix_H_T<<endl;
cout<<"Stock mini : "<<this->stock_mini<<endl;
cout<<"Stock actuel : "<<this->en_stock<<endl;
cout<<endl;
}
public : int Stock_dispo ()
{
return this->en_stock;
}
public : void Vendre(int nombre)
{
this->en_stock -= nombre;
}
public : void Stocker (int nombre)
{
this->en_stock += nombre;
}
public : bool Est_dispo ()
{
return (this->en_stock > 0);
}
public : int Commander ()
{
if (this->en_stock >= this->stock_mini)
return 0;
else
return this->stock_mini - this->en_stock;
}
};// fin classe Produit

class Date
{
public :
int jour;
int mois;
int annee;
};
class Aliment : public Produit {
public : string secteur; Date date_perempt ; double taux_tva;
//constructeur de la classe fille pour les objets nommés Aliment
Aliment (string ref,string lib,double prix_H_T, int stock_mini,
int en_stock, string secteur, Date date_perempt,
double taux_tva)
: Produit(ref,lib,prix_H_T,stock_mini,en_stock) // ne pas mettre les types des variables
{
this->secteur=secteur;
this->date_perempt= date_perempt;
this->taux_tva= taux_tva;
}
public : void Vendre(int nombre)
{
this->en_stock -= (nombre  +5) ;
}
public : void Vendre(double nombre)
{
this->en_stock -= (nombre  + 1000) ;
}
};  //fin classe Aliment
int main() {
int vente;
Produit P1("AE2456","Cahier spirale 24",89,2,8);
Date date_perempt ;
date_perempt.jour=12;
date_perempt.mois = 6;
date_perempt.annee = 2016;
Aliment A1("CR3640","Boisson sport",3.2,5,21,"boissons",date_perempt,5.5);
P1.Affiche();
A1.Affiche();
cout<<"Stock disponible avant vente : "<<A1.Stock_dispo()<<endl;
cout<<"Quantite vendue ?";
cin>>vente;
A1.Vendre(vente);
cout<<"Stock disponible apres vente : "<<A1.Stock_dispo()<<endl;
cout<<"quantite a commander : "<<A1.Commander()<<endl; 
}
