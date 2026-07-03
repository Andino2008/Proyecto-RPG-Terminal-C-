#ifndef UTILS_H
#define UTILS_H

#include <cstdlib> // Para el system("cls")
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
// El 'inline' evita que el compilador te tire error de "definición múltiple"
inline void limpiarPantalla() {
    system("cls");
}

// Declaración: la definición está en intro.cpp
void typewriter(const string &s, int ms_per_char = 40, int after_sec = 2);




#endif