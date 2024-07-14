#include <iostream>
using namespace std;
template <class T>
T MAX (T NB1, T NB2)
{
return ((NB1 > NB2)? NB1 : NB2);
}
template <class T> class Association
{
public : T Publ ;
public : T Prive ;
//Constructeur
public : Association (T a, T b)
{
Publ = a;
Prive = b;
}
public : void Affiche ()
{
cout << "Total des subventions publiques de l'association : " <<this->Publ<<"euros"<<endl;
cout << "Total des subventions privees de l'association : " <<this->Prive<<"euros"<<endl;
}
public : T Somme ()
{

return (this->Publ + this->Prive);
}
}; // fin de classe

//classe virtuelle nommée Forme 
class Forme
{
public:
// La méthode nommée "Aire" est virtuelle pure : son corps n'est pas défini ici
virtual double Aire() = 0;
};
//Classe nommée "Cercle" 
class Cercle : public Forme {
//variable d'instance d'un cercle
double Rayon;
//constructeur d'un cercle
public : Cercle (double r) : Forme() {
this->Rayon = r;
}
//Fonction membre nommée "Aire" : 
public: double Aire()
{
return 3.14*this->Rayon*this->Rayon;
}
};

class A {
public:
virtual /* pour les appels polymorphes via pointeurs */ void F() {
cout << "Fonction F de la classe A\n";
}
};
// classe B dérivée de A
class B : public A {
public:
void F() {
cout << "Fonction F de la classe B\n";
}
};

int main() {
A Obj_a;
B Obj_b;
A* ptr;
// Appels de F() avec objets
Obj_a.F();
Obj_b.F();
cout<<"Appels de F() avec pointeurs"<<endl;
ptr = &Obj_a;
ptr->F();
ptr = &Obj_b;
ptr->F();

int Nombre1 = MAX(13, 34);
float Nombre2 = MAX (50.7, 10.0);
char Lettre = MAX ('y', 'x');
cout <<"Nombre 1 : " << Nombre1<< endl;
cout <<"Nombre 2 : " << Nombre2<< endl;
cout <<"Lettre : " << Lettre<< endl;

//Instantiation : Assos1 reçoit des entiers…
Association<int> Assos1(20000,30000);
//Instantiation : Assos2 reçoit des réels…
Association <double> Assos2(1000.5 , 8000.80);
cout <<endl;
cout << "Total des subventions de l'association 1 : " << Assos1.Somme()<<" euros"<<endl;
Assos1.Affiche();
cout <<endl;
cout << "Total des subventions de l'association 2 : "<<Assos2.Somme()<<" euros"<<endl;
Assos2.Affiche();
cout <<endl;
Cercle C1(2.0);
cout<<"Aire du cercle : "<<C1.Aire()<<endl; return 0;
}

