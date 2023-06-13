// el guerrero tiene puntos de salud total en double, tiene puntos de salud actual en double, tiene un maxAtaque que define cual es su ataque
// es herencia de personaje.

#include "personaje.hpp"
#include <iostream>
#pragma once

class guerrero: public personaje{
    public:
        //constructor
        guerrero();
        //constructor sobrecargado
        guerrero(double, double, double, std::string, std::string, std::string);
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_puntosSaludTotal(double);
        double get_puntosSaludTotal();
        void set_puntosSaludActual(double);
        double get_puntosSaludActual();
        void set_maxAtaque(double);
        double get_maxAtaque();
        void recibirAtaque(double);
        void set_nombre(std::string);
        std::string get_nombre();
        void set_descripcion(std::string);
        std::string get_descripcion();
        void set_ubicacion(std::string);
        std::string get_ubicacion();
        void set_estatus(bool);
        bool get_estatus();
        void set_puntos(int);
        int get_puntos();
       
        //metodos virtuales
        void hablar() override;
        int juega() override;
        void recibeInteraccion(int) override;
        // un metodo de imprimir la barra de vida del guerrero con el nombre del guerrero en void.
        void imprimirBarraVida(); // intentaremos meter una libreria que haga esto visualmente mas bonito.
        // un metodo de saber si esta vivo o no el guerrero en bool.
        bool estaVivo();
        // un metodo de curacion que use las pociones item en void.
        void curacion();
        // un metodo para tomar pociones de las habitaciones en void.
        void guardarPociones();


    protected:
        //atributos
        //los atributos son los puntos de salud total en double, los puntos de salud actual en double, y el maxAtaque que define cual es su ataque
        double puntosSaludTotal;
        double puntosSaludActual;
        double maxAtaque;
        std::string nombre;
        std::string descripcion;
        std::string ubicacion;
        bool estatusDeVida;
        double pociones;
};
