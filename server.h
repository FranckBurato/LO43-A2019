#include <iostream>
#include <fstream>
using namespace std;

class server 
{
	public :
		server ();
		server (const server& other);
		virtual ~server();
		server& operator=(const server& other); 
		//surchage doit permettre de copier le contenu d'un objet dans l'objet courant;

		server& operator<<(const server& other);
		//surcharge doit : element que l'on souhaite afficher doit etre redirigé vers la console et element que l'on souhaite afficher doit etre redirigé vers un fichier de log


		void consoleWrite (float d);
		void fileWrite (float d);

}
