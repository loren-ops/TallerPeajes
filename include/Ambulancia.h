#pragma once
#include "Vehiculo.h"
#include "Emergencia.h"

class Vehiculo{};
class Emergencia{};

class Ambulancia : public Vehiculo, public Emergencia{
    public:
    Ambulancia (string placa, string unidad, string info, bool enEmergencia);
    ~Ambulancia ();
    int cobrar () const override;
    string getTipo () const override;
};