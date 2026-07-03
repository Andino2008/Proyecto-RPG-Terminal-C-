#include <iostream>
#include "characters.h"
using namespace std;

//Mostrar Stats.
void showStats_good (character c){
    cout << "=== STATUS DE " << c.name << " ===" << endl;
    cout << "Vida: " << c.life << endl;
    cout << "Armadura: " << c.armor << endl;
    cout << "Ataque: " << c.attack << endl;
    cout << "========================" << endl << endl;
}

//malos
void showStats_bad (enemies c){
    cout << "===STATS de " << c.name << " ===" <<endl;
     cout << "Vida: " << c.life << endl;
    cout << "Armadura: " << c.armor << endl;
    cout << "Ataque: " << c.attack << endl;
    cout << "===" << endl << endl;
}

//daño aplicado

void apliedDamage (){
    cout <<"===Recibed Damage===" <<endl;
    

}







