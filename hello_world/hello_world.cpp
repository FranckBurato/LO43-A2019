#include <iostream>
#include <string>

using namespace std;

class HelloWorld{
	private:
		int a,b;
		string test;
	public:
		void print(){
			cout << test;
		}
		HelloWorld(){
			a = 0; b = 0;
			test = "HelloWorld";
		}
		HelloWorld(string str){
			a = 0; b = 0;
			test = str;
		}
};

int main(){
	HelloWorld test;
	test.print();
	return 0;
}
