class Server {
	public:
		Server();
		~Server();
		Server(Server const &server);
		Server &operator=(Server const &server);

		void consoleWrite();
		void fileWrite();
	private:
		int capteur;
};
