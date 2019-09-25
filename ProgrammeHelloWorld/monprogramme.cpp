#include <iostream>
#include "helloworld.cpp"

int main(){
	helloworld *monobjet = new helloworld();
	(*monobjet).sayHelloWorld();
	return 0;
} 
