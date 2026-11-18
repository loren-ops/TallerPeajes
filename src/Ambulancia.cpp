#include "Ambulancia.h"
#include "Variante.h"

using namespace std;

Ambulancia::Ambulancia (string placa, string unidad, string info): Vehiculo (placa), Emergencia (unidad, info){
    this-> enEmergencia=false;
};
Ambulancia:: ~Ambulancia (){
    cout << "Destruyendo la ambulancia " << placa << endl;
};
Ambulancia:: int cobrar () const {
    if (enEmergencia==false) {
        return AMBULANCIA;
    }else{
        return descuento(AMBULANCIA);
    }
};
string getTipo () const {return "Ambulancia"; };
