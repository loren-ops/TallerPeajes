#include "Emergencia.h"

using namespace std;

Emergencia::Emergencia (string unidad, string info, bool enEmergencia);

void Emergencia:: setUnidad (string unidad){
    this->unidad=unidad;
};
void Emergencia:: serInfo (string info){
    this-> info::info;
};
void Emergencia:: setEnEmergencia (bool enEmergencia){
    this-> enEmergencia=enEmergencia;
};

string Emergencia:: getUnidad (){return unidad; };
string Emergencia:: getInfo (){return info; };
bool Emergencia::getEnEmergencia (){return enEmergencia; };
