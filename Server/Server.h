class Server {
	public:
		Server(int);
		~Server();
		Server(const Server& server);
		Server & operator=(const Server& server);

		void consoleWrite();
		void fileWrite();
	private:
		int capteur;
};
