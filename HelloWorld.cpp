#include <iostream>
#include "hello.h"

using namespace std;

void Hello::affiche(void)
{
	cout<<endl<<"Hello World!"<<endl<<endl;
}

Hello::Hello(){}

int main()
{
  Hello test;
	test.affiche();
	return 0;
}
