#include <iostream>
#include "Animales.h"

using namespace std;

int main() {
    int choice, typo;
    float promdep, prompres;
    Animales animal1;
    Animales animal2;
    Animales animal3;
    Animales animal4;

    animal1.setName("Leon");
    animal2.setName("Cebra");
    animal3.setName("Jirafa");
    animal4.setName("Pantera");

    animal1.setWeight(190.01);
    animal2.setWeight(400.12);
    animal3.setWeight(1000.31);
    animal4.setWeight( 89.45);

    animal1.setJail(1);
    animal2.setJail(2);
    animal3.setJail(3);
    animal4.setJail(4);

    animal1.setType(true);
    animal2.setType(false);
    animal3.setType(false);
    animal4.setType(true);

    cout << "\t\t Bienvenido al programa de control del Zoologico\n";
    cout << animal1.getName();
    cout << "\t\t Seleccione la accion a realizar: \n[1] Promedio de peso de por tipo de animal\n[2] Cantidad total de animales (inventario)\n[3] Total de animales por tipo\n[4] Ver todo\n\t\tSeleccione la opcion: ";
    cin >> choice;
    switch (choice) {

        case 1: cout << "\t\tPromedio de peso. \nSeleccione el tipo de animal: \n[1] Depredador \n[2] Presa\n";
        cin >> typo;
            if (typo==1){
              promdep = animal1.getWeight() + animal4.getWeight() / 2 ;
                cout << "\t\tEl promedio de peso de los aniales tipo Depredador es: " << promdep << endl;
            }
            else if ( typo == 2) {
                prompres = animal2.getWeight() + animal3.getWeight() / 2;
                cout << "\t\tEl promedio de peso de los aniales tipo Presa es: " << prompres << endl;
            }
        break;
        case 2:
            break;

        case 3:

        break;

        case 4:
            cout << "\t\tListado de animales por jaula: \n";
            cout <<"\t\t"<< animal1.getName() << " en la jaula no. " << animal1.getJail() + 1 << endl;
            cout << "\t\t"<<animal2.getName() << " en la jaula no. " << animal2.getJail() + 1 << endl;
            cout << "\t\t"<<animal3.getName() << " en la jaula no. " << animal3.getJail() + 1 << endl;
            cout << "\t\t"<<animal4.getName() << " en la jaula no. " << animal4.getJail() + 1 << endl;
            break;

        default:
            cout << "Opcion no disponible\n";
            break;
    }


    return 0;
}
