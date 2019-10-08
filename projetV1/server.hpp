class server{
	private:
        int capteur;
	public:
		server();
		server(const server&s);
		~server ();
		server &operator=(const server&s);

		void consoleWrite();
		void fileWrite();
};
