#include "Server.h"
	

using namespace std;

Server::Server(){
	this->data = "VIDE";
}

Server::Server(const Server& server){
	this->data = server.data;
}


Server::Server(string data){
	this->data = data;
}

Server::~Server(){}

void Server::setData(string donnees){this->data=donnees;}

string Server::getData(){return this->data;}

void Server::consoleWrite(const Server& display){
	cout<<display.data<<endl;
}

void Server::fileWrite(const string F){

	FILE *file;
	file=fopen("text.txt","a");   

	if(file){
		char * cstr = new char [F.length()+1];
 		strcpy (cstr, F.c_str());
   		   
    		for(int i = 0; cstr[i] != '\0'; i++)
		{
			fwrite(&cstr[i],sizeof(char),1,file);
		}
		fwrite("\n",sizeof(char),1,file);
	}
	else{
		cout << "Erreur" << endl;
	}
}

/*void Server::fileWrite(const string F){			// problème de fonctionnement quand on ouvre et ferme les fichiers visiblements...cela écrase les données précédentes
	ofstream file("fichier.txt");				// j'ai longuement cherché une solution sans trouver, ainsi j'ai opté pour une méthode d'écriture plus similaire à celle utilisée en C
	if(file){						
		file.seekp(0, ios::end);
		file<<F<<endl;
		file.close();
	}
	else{
		cout << "Erreur" << endl;
	}
}*/


Server& Server::operator=(const Server& server){
    this->data=server.data;
    return *this;
}

ostream& operator<<(ostream& os, const Server& server){
    os<<server.data<<endl;
    return os;
}







