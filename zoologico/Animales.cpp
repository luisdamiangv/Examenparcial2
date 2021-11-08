//
// Created by Luis Damián on 08/11/2021.
//
#include <iostream>
#include <conio.h>
#include "Animales.h"
using namespace std;
    Animales::Animales(string *nombreAn, float pesoAn, int numJaula, bool tipoAn){
     void setName(string _name);
      void setWeight(float _weight);
      void setJail(int _Jail);
      void setType(bool _type);
   }

void Animales::setName(string _name) {
    nombreAn = _name;
}
void Animales::setWeight(float _weight) {
    pesoAn = _weight;
}

void Animales::setJail(int _jail) {
    numJaula = _jail;
}

void Animales::setType(bool _type) {
    tipoAn = _type;
}

string Animales::getName() {
        return nombreAn;
    }

float Animales::getWeight() {
        return pesoAn;
    }

int Animales::getJail() {
    return numJaula;
}

bool Animales::getType() {
    return tipoAn;
}

float Animales::promWeight() {

    }
/*
string Animales::animalesYJaulas() {
        int jail;
        cout << "Los animales disponibles por jaula son: \n"
    for (int i = 0; i < jail ; ++i) {
        printf()
    }
    }
*/

