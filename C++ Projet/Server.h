#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <string>

/*此类必须使我们能够接收所有传感器发送的数据，然后将它们存储在日志文件中或在控制台中显示。 为此，您将从实现类的Coplien的规范形式开始。 完成后，您将编写两个函数：
•“ consoleWrite”以在控制台中查看传入的数据
•“ fileWrite”以将传感器的数据存储在日志文件中（每个传感器必须具有其日志文件）*/

using namespace std;

class Server
{
    private:
	int nbOfSensors;
	bool consolActivation;
	bool logActivation;

	void fileWrite(int dataSens_p);
	void consolWrite(int dataSens_p);
    
    public:
        Server();
	Server(Server server_p);
	Server(int nbOfSensors_p, bool consolActivation, bool logActivation);

	virtual ~Server();

	Server& operator=(Server server_p)const;
	friend ostream& operator>>(ostream& os, const int dataSens);
	friend ostream& operator>>(ostream& os, const string dataSens_toString);

	void dataRcv(int Sens);

    protected:
    
};

#endif // SERVER_H
