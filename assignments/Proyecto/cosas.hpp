//estas son cosas que carga el personaje con valor en monedas y dialogo

#include <iostream>
#pragma once



class cosas{
    public:
        //constructor
        cosas();
        //constructor sobrecargado
        cosas(std::string, int, std::string);
        //metodos
        //los metodos son los getters y setters de los atributos.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_puntos(int);
        int get_puntos();
        void set_dialogo(std::string);
        std::string get_dialogo();
        // un metodo que imprime el nombre del item y los puntos de salud que regenera.
        void mostrar();
    protected:
        //atributos
        //los atributos son el nombre en string y los puntos de salud que regenera el item en int.
        std::string nombre;
        int puntos;
        std::string dialogo;
        
};
