#ifndef ATTACK_H
#define ATTACK_H
#include <random>
#include "characters.h"

//funciones para randomizar un numero con rango. {
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(1, 40);
bool exito;
//}



//c++ es una mierda. No entiendo que carajo hace esto
inline float damage(const character &player) { //solo para jugador
    int damage_base = player.attack;
    float max_damage = damage_base * 1.25f;
    max_damage = ((max_damage * damage_base) + max_damage) / 1.67f;

    return max_damage;
};

inline float damage_e(const character &enemies) {
    int damage_base = enemies.attack;
    float max_damage = damage_base * 1.25f;
    max_damage = (max_damage * damage_base);
    return max_damage;
};


//funciones para que el juego tire dados en el combate. 


void posibilidad_negativa (character &player) {
    float damage_porcentaje = player.attack * 100;
    player.attack *= 1.25f;
    if (player.attack < damage_porcentaje/60) {
        player.attack -= damage_porcentaje/60;
    }
}

//toma una semilla aleatoria, la pasa de un rango del 1 al 40, observa si el resultado final es par o impar, y dependiendo de eso es true (exito) o false (mal)
bool posiblidad_positiva () { 
    int intento = dist(gen);

    if (intento % 2 == 0) {
        exito = true;
    } else {
        exito = false;
    }
    return exito;
}

void calcular_damage (character player) {
    posiblidad_positiva();
    posibilidad_negativa(player);
}





#endif