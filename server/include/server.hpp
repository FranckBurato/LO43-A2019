#include <string>
#include <iostream>
#ifndef SERVER_H
#define SERVER_H

class Server{
	private:
		float temperature;
		float humidity;
		bool brightness;
		int loudness;
	public:
		friend class scheduler;
		Server();
		//Server(std::string str);
		Server(const Server& server);
		virtual ~Server();
		Server& operator=(const Server& server);
		friend std::ostream& operator<<(std::ostream& os, const Server& server);
		void consoleWrite() const;
		void fileWrite(const std::string &name) const;
};
#endif /* ifndef SERVER_H */
