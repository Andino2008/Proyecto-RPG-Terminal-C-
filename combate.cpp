#include "combate.h"
#include "attack.h"
#include "characters.h"
#include <iostream>
#include "dialogues.h"
#include "utils.h"
#include <random>

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(1, 40);
bool exito;

bool posiblidad_positiva () {
    int intento = dist(gen);

    if (intento % 2 == 0) {
        exito = true;
    } else {
        exito = false;
    }
    return exito;
}

void posibilidad_negativa (character &player) {
    float damage_porcentaje = player.attack * 100;
    player.attack *= 1.25f;
    if (player.attack < damage_porcentaje/60) {
        player.attack -= damage_porcentaje/60;
    }
}

//combate 1 con el pulpito de mierda ese que puse por alguna razon que no recuerdo...
void combate1(character &player, enemies &enemie3_zone1_normal) {
    bool batalla = true;
    typewriter("Batalla iniciada", 40, 2);

    cout <<"Damage base: " <<player.attack;
    cout <<"Armadura: " <<player.armor;

    do {
        cout<<"Golpear (1)" <<endl;
        cout<<"Consultar estadisticas (2)" <<endl;
        int eleccion;
        cin >> eleccion;

        switch (eleccion) {

            case 1:
                cout <<"==Levantaste tu espada. Fuiste directo a tu enemigo y... " <<endl;
                if (posiblidad_positiva()) { // Evaluamos directo el true/false
                    cout << "¡Golpe exitoso!== " << endl;
                    enemie3_zone1_normal.life -= damage(player);
                    limpiarPantalla();
                } else {
                    posibilidad_negativa(player);
                    cout << "Golpe horrible== " << endl;
                    enemie3_zone1_normal.life -= damage(player) * 0.095f;
                    cout << "==El enemigo se aprovecha de tu defensa==" <<endl;
                    player.armor -= damage(player) * 0.50f;
                    limpiarPantalla();
                }
            break;

            case 2:
                showStats_bad(enemie3_zone1_normal);
            break;

            default:
                cout <<"No." <<endl;
            break;
        }











    } while(batalla == true);

}















