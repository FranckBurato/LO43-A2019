#include "server.h"
#include "sensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include <time.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



int main()
{

    //initialisation de mes objets
    server serv(4,1,1);
    Humidity huSens;
    Light lightSens;
    Temperature tempSens;
    Sound soundSens;

    //initialisation de mes variables
    bool continuer=1;
    int quelCapteur;
    int tempsAffichage;
    string dataLog;
	int temps ;
	temps =(int) time(NULL);
	int tempsBoucle ;
	int tempsBoucleFin ;
	char rep;
	float valeur;


    //initialisation de mes flux de conversion de data vers string
    ostringstream ossHu, ossTemp, ossLight, ossSound;

    //pour ne pas avoir les memes valeurs aléatoire à chaque lancement
    srand(time(NULL));

    cout << "Bonjour," << endl << "Les donnees des capteurs vont s'afficher ci-dessous en temps reel." << endl << endl;

	cout << "Combien de temps voulez-vous que la capture des données se fasse? "<< endl << "Veuillez entrer un nombre (secondes) : ";

	cin >> tempsBoucleFin;
	cout << endl;

	tempsBoucleFin=temps+tempsBoucleFin;

    while (continuer==1)
    {
        quelCapteur = 1 + rand()%4;
        tempsAffichage = rand()%3;

        switch(quelCapteur)
        {
           case 1 : //Humidity  FLOAT
                valeur = huSens.getData(huSens);
                cout << "--- Capteur d'Humidite ---" << endl;
                serv.consoleWrite(valeur, serv);
                cout << "% d'humidite." << endl << endl;
                ossHu << valeur << ", ";
                dataLog = ossHu.str();
                serv.fileWrite(dataLog,1);
                break;

            case 2 : //Temperature FLOAT
                valeur = tempSens.getData(tempSens);
                cout << "--- Capteur de Temperature ---" << endl;
                serv.consoleWrite(valeur, serv);
                cout << " Kelvin." << endl << endl;
                ossTemp << valeur << ", ";
                dataLog = ossTemp.str();
                serv.fileWrite(dataLog,2);
                break;

            case 3 : //Light BOOL
                valeur = lightSens.getData(lightSens);
                cout << "--- Capteur de Lumiere ---" << endl;
                serv.consoleWrite(valeur, serv);
                cout << " ." << endl << endl;
                ossLight << valeur << ", ";
                dataLog = ossLight.str();
                serv.fileWrite(dataLog,3);
                break;

            case 4 : // Sound INTEGER
                valeur = soundSens.getData(soundSens);
                cout << "--- Capteur de son ---" << endl;
                serv.consoleWrite(valeur, serv);
                cout << " dB." << endl << endl;
                ossSound << valeur << ", ";
                dataLog = ossSound.str();
                serv.fileWrite(dataLog,4);
                break;
        }

        sleep(tempsAffichage);
		tempsBoucle=(int)time(NULL);
		if (tempsBoucle > tempsBoucleFin)
		{
			cout<<"Fin du temps de capture."<<endl;
			cout << "Souhaitez-vous prolonger la capture de donnee? O pour oui, N pour non"<<endl;
			cin>>rep;
			while (rep != 'O' && rep != 'N' && rep != 'o' && rep != 'n')
			{
				cout << "Mauvaise reponse. Il faur repondre par O pour oui, ou N pour non."<<endl;
				cin>>rep;
			}
			if (rep == 'O' || rep == 'o')
			{
				cout << "veuillez indiquez le temps supplementaire (secondes) :" << endl;
				cin>>temps;
				cout << endl;
				tempsBoucleFin=tempsBoucleFin+temps;
			}
			else
			{
				continuer=0;
			}

		}


    }


    return 0;


}
