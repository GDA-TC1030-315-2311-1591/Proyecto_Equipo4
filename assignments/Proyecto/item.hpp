// item es la clase complemento de cuarto, ya que los items son los que se encuentran en los cuartos.
// normalmente unicamente tienen 2 atributos que son el nombre en string y los puntos de salud que regenera el item en int.

#include <iostream>
#pragma once



class item{
    public:
        //constructor
        item();
        //constructor sobrecargado
        item(std::string, int);
        //metodos
        //los metodos son los getters y setters de los atributos.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_puntos(int);
        int get_puntos();
        // un metodo que imprime el nombre del item y los puntos de salud que regenera.
        void mostrar();
    protected:
        //atributos
        //los atributos son el nombre en string y los puntos de salud que regenera el item en int.
        std::string nombre;
        int puntos;
        
};
