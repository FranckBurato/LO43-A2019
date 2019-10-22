# LO43-A2019
TP C++ UTBM LO43 - AUTOMNE 2019 - Maxime Suratteau

## Mise en contexte
Ce projet a pour but la réalisation d’un simulateur, permettant de modéliser un écosystème IOT
spécialisé dans le monitoring de qualité de l’air d’espace de travail.
Cet écosystème sera composé d’un serveur communiquant avec divers types de capteurs
répartis au sein de l’espace de travail, tels qu’un capteur de température, un capteur
d’humidité, un capteur de lumière, ainsi qu’un capteur sonore. De plus, les informations
provenant des capteurs pourront être stockées sous forme de fichier de logs ou encore
partagées dans une console afin de les visualiser.

## Implémentation
Le projet est réalisé en C++ et utilise certaines nouveautés de la norme C++11.
La classe principale est Scheduler, composée entre autres de quelques capteurs et d'un serveur.
Les capteurs sont implémentés gâce à un unique template. Le serveur a pour rôle de récupérer les
données des capteurs et de les rediriger soit vers un fichier soit vers la sortie standard.

## Compilation
Le projet a été développé avec clang, mais g++ devrait pouvoir compiler sans soucis.

- Si clang est instalé
  * ```bash
      cd src
      make
      ```
- Si vous n'avez que g++, il vous faudra modifier le make afin de remplacer `clang` par `gcc` et `clang++` par `g++`

## Utilisation
Lancez le projet avec `./scheduler`
