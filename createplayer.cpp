#include <iostream>
#include <thread>
#include <chrono>
#include "utils.h"
#include "createplayer.h"

using namespace std;

character charactercreateNewPlayer() {
    character player;
    int opcion; 

    cout << "=== CREACION DE PERSONAJE ===" << endl;
    cout << "Introduce el nombre de tu personaje: ";
    
    getline(cin, player.name);

    cout <<"Elija su build..." <<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout <<"Caballero Osculto: Vida: 100. Armadura: 40. Ataque: 70. (1)" <<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout <<"Loco: Vida: 50. Armadura: 120. Ataque: 40 (2)" <<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout <<"Inferno: Vida: 30. Armadura: 0. Ataque: 300 (3)" <<endl;
    this_thread::sleep_for(chrono::seconds(2));
    
do { //opciones de build fija.
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout <<"Tienes la bendicion del reino entero" <<endl;
            player.life = 100;
            player.armor = 40;
            player.attack = 70;
        break;
        
        case 2:
            cout <<"Estas demente. Pero el reino te necesita." <<endl;
            player.life = 50;
            player.armor = 120;
            player.attack = 40;
        break;
        
        case 3:
            cout <<"Tu alma esta hecha de pura maldad, maldito. Espero mueras pronto, el reino te odia" <<endl;
            player.life = 30;
            player.armor = 0;
            player.attack = 300;
        break;

        default:
            opcion = 0;
        break;
    }
} while (opcion == 0);

    this_thread::sleep_for(chrono::seconds(2));
    cout<<"El alma de "  <<player.name  <<" ha sido entregada a su busqueda" <<endl;
    limpiarPantalla();
    return player; // Devolvemos el struct completo cargado con datos
}