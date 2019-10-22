#include "Scheduler.h"
using namespace std;
Scheduler::~Scheduler() {  };
Scheduler& Scheduler::operator=(Scheduler& a) {
	s = a.s;
	tab = a.tab;
	return *this;
};
void Scheduler::begin() {
	cout << "Welcome to the IOT initializaton!" << endl;
	cout << "There are four type of sensor:" << endl << "1.temperature		2.humidity" << endl << "3.sound			4.light" << endl << "5.exit" << endl;
	int i = 0;
	temperature* a = new temperature();
	sound* c = new sound();
	humidity* b = new humidity();
	light* d = new light();
	int o = 0;
	while (i != 5)
	{
		cin >> i;
		switch (i) {
		case 1:
				tab.push_back(a);
				cout << "frequency of sensor temperature(seconds): " ;
				cin >> o;
				a->setfre(o);
				cout << endl;
             cout << "new sensor temperature one,continue...." << endl;
			break;
		case 2:
			tab.push_back(b);
			cout << "frequency of sensor humidity(seconds): ";
			cin >> o;
			b->setfre(o);
			cout << endl;
			cout << "new sensor humidity one,continue...." << endl;
			break;
		case 3:
			tab.push_back(c);
			cout << "frequency of sensor sound(seconds): " ;
			cin >> o;
			c->setfre(o);
			cout << endl;
			cout << "new snesor sound one,continue...." << endl;
			break;
		case 4:
			tab.push_back(d);
			cout << "frequency of sensor light(seconds): " ;
			cin >> o;
			d->setfre(o);
			cout << endl;
			cout << "new snesor light one,continue...." << endl;
			break;
		}
	}
}
		void Scheduler::run() {
			
			{
				for (list<Sensor*>::iterator iterator = this->tab.begin(); iterator != tab.end(); ++iterator)
				{
					int i = 0;
					while (i < 5) {
						s.dataRcv((*iterator)->sendData(), (*iterator)->gett());
						i++;
					}
				}
				
			}
		};
