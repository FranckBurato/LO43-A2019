#ifndef DEF_HELLOWORLD
#define DEF_HELLOWORLD

#include <string>

class Helloworld
{
    public:
     Helloworld();
     void CallHelloworld();

    private:
     std::string helloWorld = ("Hello World !");
};

#endif