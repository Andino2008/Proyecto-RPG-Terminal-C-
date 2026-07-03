#ifndef CHARACTERS_H
#define CHARACTERS_H
#include <string>
using namespace std;

//guarda variables basicas de personaje
struct character {
    string name;
    int life;
    int armor;
    int attack;
};
//lo mismo pero con enemigos.
struct enemies {
    string name;
    int life;
    int armor;
    int attack;

};

void showStats_good (character c);

void showStats_bad (enemies c);



#endif