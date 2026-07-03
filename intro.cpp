#include <iostream>
#include "intro.h"
#include <thread>
#include <chrono>
#include "utils.h"
using namespace std;


//esta funcion hace un efecto de maquina de escribir
void typewriter(const string &s, int ms_per_char, int after_sec) {
    for (char c : s) { 
        cout << c << flush; 
        this_thread::sleep_for(chrono::milliseconds(ms_per_char)); 
    }
    cout << '\n';
    this_thread::sleep_for(chrono::seconds(after_sec));
}

//la intro basica, no tiene mucho misterio.
void showIntro() { 
    cout << "RPG." << endl;
    cout << "La humanidad fue arrazada" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "Solo alguien pudo despertarse para darle un alto" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "Un manto lleno de cenizas. Una verdad llena de dolor." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "Tu, persona. Has elegido el camino del sufrimiento" << endl; // no tanto sufrimiento como programar esta mierda
    this_thread::sleep_for(chrono::seconds(2));
    
    typewriter("Levantate, busca tu camino. Acepta la mano de la Luz Venigna. El reinado de Diamond no recibira a aquellos que tengan miedo", 40, 2);
    limpiarPantalla();
}
