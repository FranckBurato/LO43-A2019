#include "Helloworld.h"
#include <iostream>
#include <string>

using namespace std;


void Helloworld::CallHelloworld()
  {
    std::cout<< this-> HelloWorld<< endl;
  }

int main()
{
 Helloworld::CallHelloworld;
 return 0;
}