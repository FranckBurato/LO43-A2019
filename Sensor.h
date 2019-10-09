

class Sensor
{
	public :
		Sensor();
		Sensor(const Sensor&);
		virtual ~Sensor();
	protected :
		template <class T> T aleaGenVal ();
	private :
};
