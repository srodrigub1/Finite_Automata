#include <iostream>
#include "Automata.h"
using namespace std;



void analizarCadena (string cadena, int transiciones[6][2], estadosAutomata estados[]) {
    int estadoActual = 0;


    for (int i = 0; i < cadena.length(); i++) {
        int caracter;
        if (cadena[i] == 'a') {
            caracter = 0;
        } else if (cadena[i] == 'b') {
            caracter = 1;
        } else {
            cout << "Caracter fuera del alfabeto" << endl;
            return;
        }
        estadoActual = transiciones[estadoActual][caracter];
        if (estadoActual == -1) {
            cout << "Cadena no valida." << endl;
            return;
        }
    }
   if (estados[estadoActual].estadoFinal == true) {
       cout << "Cadena aceptada por el patron: " << estados[estadoActual].patronReconoce << endl;
   } else {
       cout << "Cadena no valida." << endl;
   }
}




int main() {

    estadosAutomata estados[] = {
        estadosAutomata(137, true, false, ""),
        estadosAutomata(247, false, true, "a"),
        estadosAutomata(7, false, false, ""),
        estadosAutomata(8, false, true, "a*b+"),
        estadosAutomata(58, false, true, "a*b+"),
        estadosAutomata(68, false, true, "abb")
    };


    //Primer numero representa a que estado(indice) va con a, segundo numero representa a que estado(indice) va con b
    int tablaTransiciones[6][2] = { //tablaTransiciones[0][1]
        {1, 3},
        {2, 4},
        {2, 3},
        { -1, 3},
        { -1, 5},
        { -1, 3}
    };

string cadenaAnalizar;
    cout << "Ingrese la cadena que desea analizar por el automata: " << endl;
    getline(cin, cadenaAnalizar);
    analizarCadena(cadenaAnalizar, tablaTransiciones, estados);
    return 0;



};

