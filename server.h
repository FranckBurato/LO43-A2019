#pragma once
class server
{
private:
	int donnee;

public:
	server();
	~server();
	server(const server& s);
	server& operator=(const server& s);
	void consoleWrite();
	void fileWrite();

	server& operator << (const server& s);

};