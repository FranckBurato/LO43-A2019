#include "Helloworld.h"
#include <iostream>
#include <string>

using namespace std;


Helloworld::Helloworld()
{}

void Helloworld::CallHelloworld()
  {
    cout<< helloWorld << endl;
  }

int main()
{
  Helloworld Objet;
  Objet.CallHelloworld();

 std::cin.get();
 return 0;
}