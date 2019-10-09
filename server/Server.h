#include <iostream>
#include <string>

using namespace std;

class Server{

	private : string data;
	public : 
		Server();    // constructeur par defaut
		Server(const Server &);    //Recopie 
		Server & operator=(const Server&);
		friend ostream & operator << (ostream&,const Server&);
		Server(string data);
		~Server(); // Destructeur
		void consoleWrite(string display);
		void fileWrite(string F);
		
};

class Sensor{
	
	protected: template <class T> T aleaGenVal();
	public:
		Sensor();
		Sensor(const Sensor &);
		~Sensor();

};

class Temperature:public Sensor{

		private : float temp;
		public : 

};

class Humidity:public Sensor{

		private : float temp;
		public : 

};

class Light:public Sensor{

		private : bool light;
		public : 

};

class Sound:public Sensor{

		private : int sound;
		public : 

};
