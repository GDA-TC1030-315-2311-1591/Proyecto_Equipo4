#include"cuarto.hpp"
#pragma once

cuarto::cuarto(){//constructor default
    this->nombre = " ";
    this->item = NULL;
    this->personaje = NULL;
    this->cuartoSiguiente = NULL;
}
//La neta no se como poner este constructorsobrecardaro con apuntadores
cuarto::cuarto(std::string nombre, item* item, personaje* personaje, cuarto* cuartoSiguiente){ //constructor sobrecargado
    this->nombre = nombre;
    this->item = item;
    this->personaje = personaje;
    this->cuartoSiguiente = cuartoSiguiente;
}
