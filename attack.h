#ifndef ATTACK_H
#define ATTACK_H
#include "characters.h"

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




#endif