#pragma once
#include "Vehiculo.h"
#include <iostream>
#include <string>

class Vehiculo{};

class Emergencia {
    protected:
    string unidad;
    string info;
    bool enEmergencia;
    public: 
    Emergencia (string unidad, string info, bool enEmergencia);
    void  setUnidad (string unidad);
    void serInfo (string info);
    void setEnEmergencia (bool enEmergencia);
    string getUnidad ();
    string getInfo ();
    bool getEnEmergencia ();
};