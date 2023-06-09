//Esta clase esta declarada en el archivo amistoso.cpp y es hija de la clase personaje
//la clase amistoso define a los personajes que son amistosos, es decir, que no atacan, y que narran la historia.
//el estatus es si habla o no, y el nombre es el nombre del personaje.
#pragma once
#include "personaje.hpp"

class amistoso: public personaje
{
  private:
    bool estatus;
  public:
    amistoso();
    amistoso(bool, std::string);
    void set_estatus(bool);
    bool get_estatus();
    void set_nombre(std::string);
    std::string get_nombre();
    void hablar();
    void atacar();
    void mostrar();
};

