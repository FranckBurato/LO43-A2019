#include <iostream>


class server{
    private:
        float temperature;
        float humidite;
        float lumiere;
        float son;

    public:

        server(): temperature(), humidite(), lumiere(), son(){};
        server(const server& autre): temperature(autre.temperature), humidite(autre.humidite), lumiere(autre.lumiere), son(autre.son){};
        ~server(){};
        server &operator=(const server& autre){};
        server &operator<<(const server& autre){};

        void consoleWrite();
        void fileWrite();

};
