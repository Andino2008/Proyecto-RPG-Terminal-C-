#include "combate.h"
#include "attack.h"
#include "characters.h"
#include <iostream>
#include "dialogues.h"
#include "utils.h"


int eleccion = 0;
//funciones de combate

int puto = 1;

void combate(character &player, enemies &enemigo_actual){
    while (puto == true) {
        typewriter("Batalla iniciada", 40, 2);

        do { //combate de jugador
            cout<<"Golpear (1)" <<endl;
            cout<<"Consultar estadisticas (2)" <<endl;
            cout<<"Salir (cualquier otra tecla)" <<endl;
            cin >> eleccion;
            
            switch (eleccion) {

                case 1:
                    //golpear();
                break;

                case 2:
                    showStats_bad(enemigo_actual);
                break;

                default:
                    eleccion == 999;
                break;
            }


        } while (eleccion == 0);

           



    }
};


