#include <iostream> 
#include "characters.h"
#include "dialogues.h"
#include "utils.h"
using namespace std;

    void campaing (character &player) {
        int progreso = 1;
        bool game_active = true;
        int puto = 0;

        //enemigos zona 1:

        character enemie1_zone1_normal;
        enemie1_zone1_normal.name = "Basilisco de Ceniza";
        enemie1_zone1_normal.life = 200;
        enemie1_zone1_normal.attack = 60;
    
        character enemie2_zone1_normal;
        enemie2_zone1_normal.name = "Alma condenada al exilio";
        enemie2_zone1_normal.life = 140;
        enemie2_zone1_normal.attack = 70;

        character enemie3_zone1_normal;
        enemie3_zone1_normal.name = "Pulpito";
        enemie3_zone1_normal.life = 100;
        enemie3_zone1_normal.attack = 30;

        while (game_active == true){

            switch (progreso) {

                case 1: //primera mision del juego.
                    dialogo1(player);
                    cout<<"Has encontrado tu primer enemigo: " <<enemie3_zone1_normal.name <<"Preparate para enfrentarlo!" <<endl;
                    limpiarPantalla();
                    //primer combate. Ahora se supone que debería programarlo... la puta madre.


                break;




            }







        };
    

    };



















