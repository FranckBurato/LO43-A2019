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

//Cr�ation de ma class Sensor et class Template permettra de g�n�rer des donn�es de types diff�rents: Integer, Float et Boolean

template<class T> class Sensor
{

private:
    /*D�claration des attribut*/

   int valSense;

   int aleaGenVal() /*La methode permet de generer une valeur aleatoire*/
    {
        srand(time(NULL)); /*Initialisation de la fonction "srand"� z�ro*/


        return (rand()%110); /*Sinon g�n�re un nombre al�atoire*/
    }

public:
        string typeCapteur;
    /*D�claration des m�thodes sous la forme canonique de Coplien*/


    Sensor() /*Initialisation de mon constructeur par defaut*/
    {
        this->valSense=aleaGenVal(); /*l'attribut 'ValSense' prend la valeur Al�atoire g�ner�e par la methode "aleaGenVal"*/
    }

    Sensor(const Sensor &sensor_p) /*Initialisation du constructeur par recopie, prend en param�tre une variable de type T "Sensor_p"*/
    {
        this->valSense=sensor_p.valSense;
    }

    Sensor(int valRcv) /*la m�thode permet d'attribuer la valeur re�ue � l'attribut "ValSense" */
    {
        this->valSense=valRcv;
    }

    ~Sensor(){}; /*Initialisation du destructeur*/

    int sendData() /* la methode permet d'envoyer la valeur aleatoire Re�ue par l'attribut "ValSense" au "Serveur" */
    {
        return this->valSense;
    }




};

#endif // SENSOR_H_INCLUDED

