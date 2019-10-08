#include "Server.h"
#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
	Server h("test2.txt");
	Server j=h;
	cout<<j;
	
}

