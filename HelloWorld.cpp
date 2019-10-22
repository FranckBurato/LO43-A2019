#include<iostream>
 
using namespace std;
 
// Création de la classe HelloWorld
 
class HelloWorld
{
  public:
 
    void Affiche() {
      cout << "Hello World\n";
    }
};
 
int main()
{
    HelloWorld c;    // Création d'un objet c
    c.Affiche();  // Appel de la fonction Affiche
 
    return 0;
}