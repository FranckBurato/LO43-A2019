class Scheduler
{
private:
	Server server;
	Sensor sensor;
public:
	Scheduler()
	{
		Server();
		Sensor();
	};
	Scheduler(const Scheduler& autre)
	{
		this->server=autre.server;
		this->sensor=autre.sensor;
		return *this;
	};
	~Sheduler(){};
}
