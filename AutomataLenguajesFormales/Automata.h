//
// Created by USUARIO on 5/03/2026.
//

#ifndef AUTOMATALENGUAJESFORMALES_AUTOMATA_H
#define AUTOMATALENGUAJESFORMALES_AUTOMATA_H
#include <iostream>
#include <string>
using namespace std;

//Estructura de los estados
struct estadosAutomata {
    int nombreEstado;
    bool estadoInicial;
    bool estadoFinal;
    string patronReconoce;

    estadosAutomata (int nom, bool esI, bool esF, string patron) : nombreEstado(nom), estadoInicial(esI), estadoFinal(esF), patronReconoce(patron) {}

};










#endif //AUTOMATALENGUAJESFORMALES_AUTOMATA_H