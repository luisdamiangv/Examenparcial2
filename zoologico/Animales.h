//
// Created by Luis Damián on 08/11/2021.
//

#ifndef ZOOLOGICO_ANIMALES_H
#define ZOOLOGICO_ANIMALES_H
using namespace std;

class Animales {
private:
    Animales(string *nombreAn, float pesoAn, int numJaula, bool tipoAn);

    string nombreAn {50};
    float pesoAn;
    int numJaula;
    bool tipoAn;

public: //Métodos
    //Constructor
    Animales(){}

    //Métodos set
    void setName(string _name);
    void setWeight(float _weight);
    void setJail(int _jail);
    void setType(bool _type);

    //Métodos get
    string getName();
    float getWeight();
    int getJail();
    bool getType();

    //Métodos
    float promWeight();
    int countTot();
    int countAll();
    string animalesYJaulas();
};


#endif //ZOOLOGICO_ANIMALES_H
