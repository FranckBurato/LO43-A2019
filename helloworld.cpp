#include <iostream>

class Helloworld {
	public:
		static void print() { std::cout << "Hello, World!" << std::endl; }
};

int main() {
    Helloworld::print();
    return 0;
}
