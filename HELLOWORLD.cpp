#include<iostream>
using namespace std;

class HelloWorld{
    public:
    void afficher();
};

void HelloWorld::afficher(){
    cout << "Hello World ! ";
}

int main(){
    HelloWorld A;
    A.afficher();
    return 0;
}