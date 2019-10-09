#include "Server.h"
#include <iostream>
#include <fstream>

using namespace std;

int main () 
{
	Server h("test.txt");
	Server j;
	j.fileWrite();
	j.consoleWrite();
	
}

