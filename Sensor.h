#ifndef SENSOR0_H_INCLUDED
#define SENSOR0_H_INCLUDED
#include<iostream>
#include<ostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string>

using namespace std;

//Création de ma class Sensor et class Template permettra de générer des données de types différents: Integer, Float et Boolean

template<class T> class Sensor
{

private:
    /*Déclaration des attribut*/

   int valSense;

   int aleaGenVal() /*La methode permet de generer une valeur aleatoire*/
    {
        srand(time(NULL)); /*Initialisation de la fonction "srand"à zéro*/


        return (rand()%110); /*Sinon génère un nombre aléatoire*/
    }

public:
        string typeCapteur;
    /*Déclaration des méthodes sous la forme canonique de Coplien*/


    Sensor() /*Initialisation de mon constructeur par defaut*/
    {
        this->valSense=aleaGenVal(); /*l'attribut 'ValSense' prend la valeur Aléatoire génerée par la methode "aleaGenVal"*/
    }

    Sensor(const Sensor &sensor_p) /*Initialisation du constructeur par recopie, prend en paramètre une variable de type T "Sensor_p"*/
    {
        this->valSense=sensor_p.valSense;
    }

    Sensor(int valRcv) /*la méthode permet d'attribuer la valeur reçue à l'attribut "ValSense" */
    {
        this->valSense=valRcv;
    }

    ~Sensor(){}; /*Initialisation du destructeur*/

    int sendData() /* la methode permet d'envoyer la valeur aleatoire Reçue par l'attribut "ValSense" au "Serveur" */
    {
        return this->valSense;
    }




};

#endif // SENSOR_H_INCLUDED

