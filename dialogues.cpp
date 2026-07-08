#include <iostream>
#include "utils.h"
#include "characters.h"
#include "campaing.h"
using namespace std;

//dialogos sencillos de combate

//mensaje para cualquier ataque en general.
//Levantaste tu espada. Fuiste directo a tu enemigo y...
void mensaje_ataque(){
    cout <<"==Levantaste tu espada. Fuiste directo a tu enemigo y... " <<endl;
}

//funciones para los mensajes exitos si el jugador le gana al RNG {

//¡Golpe exitoso!==
void mensaje1_ataque_exitoso(){
    cout << "¡Golpe exitoso!== " << endl;
}



//dialogo campaña

void dialogo1(const character &player) {
    cout<<player.name <<" :Parece que esta tierra esta vacia... he despertado en... este lado. " <<endl;
    typewriter("Deberia... asesinar algo", 40, 1.4);
    cout << " " <<endl;
    
    limpiarPantalla();
    
    cout<<player.name <<" :Los alrededores me estan cansando. Hay algo en mi cabeza que no deja de hablar" <<endl;
    cout <<"===Mientras tanto, el recorria un descampado total. Encontrar tan solo un par de animales ya era un milagro" <<endl;
    cout <<"Sorpresivamente, cuando sus pies tocaron el suelo blando, un ser de varios tentaculos emergió del suelo! ===" <<endl;
    limpiarPantalla();
}


