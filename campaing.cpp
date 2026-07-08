#include <iostream> 
#include "characters.h"
#include "dialogues.h"
#include "combate.h"
#include "utils.h"
using namespace std;

    void campaing (character &player) {
        int progreso = 1;
        bool game_active = true;
        int puto = 0; //existe por si el bucle falla. No pasó, pero esta ahi.

        //enemigos zona 1:

        enemies enemie1_zone1_normal;
        enemie1_zone1_normal.name = "Basilisco de Ceniza";
        enemie1_zone1_normal.life = 200;
        enemie1_zone1_normal.attack = 60;
    
        enemies enemie2_zone1_normal;
        enemie2_zone1_normal.name = "Alma condenada al exilio";
        enemie2_zone1_normal.life = 140;
        enemie2_zone1_normal.attack = 70;

        enemies enemie3_zone1_normal;
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
                    combate1(player, enemie3_zone1_normal);
                    progreso++; //esto hace que automaticamente termine el caso 1, y de una vez el bucle while se repita, pero como progreso = 2; significa que no va a volver nunca al caso 1.
                break;




            }







        };
    

    };



















