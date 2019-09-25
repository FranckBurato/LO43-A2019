class Server 
{
    public:
      
      Server();
      Server(Server const& );
      //operateur = ?
      ~Server();
      void consoleWrite();
      void fileWrite();

    private:
    
      int data;

}