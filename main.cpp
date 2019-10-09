#include <iostream>
#include <string>
#include <fstream>
#include "Server.h"

using namespace std;

int main()
{
    SERVER test1(1,1,true,1), test2;
    cout << test2;
    test2=test1;
    cout << test2;
    return 0;
}
