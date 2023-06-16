// el guerrero tiene puntos de salud total en double, tiene puntos de salud actual en double, tiene un maxAtaque que define cual es su ataque
// es herencia de personaje.

#include "personaje.hpp"
#include <iostream>
#pragma once

class guerrero: public personaje{
    
    protected:
        //atributos
        //los atributos son los puntos de salud total en double, los puntos de salud actual en double, y el maxAtaque que define cual es su ataque
        double puntosSaludTotal;
        double puntosSaludActual;
        double maxAtaque;
        
    public:
        //constructores
        guerrero();
        guerrero(double, double, double, std::string, std::string, bool);
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
        void imprimecaract() override; //metodo virtual que imprime las caracteristicas del personaje
        void hablar() override;
        void juega(guerrero &t,guerrero &t2);
        void recibeInteraccion(int) override;
        // un metodo de imprimir la barra de vida del guerrero con el nombre del guerrero en void.
        double CalculoBarraVida();//metodo para calcular la barra de vida
        void imprimirBarraVida(); // intentaremos meter una libreria que haga esto visualmente mas bonito.
        // un metodo de saber si esta vivo o no el guerrero en bool.
        bool estaVivo();
        // un metodo de curacion que use las pociones item en void.
        void curacion();
        // un metodo para que los amistosos le den vida.
        // un metodo para que amistosos te den ataque
        friend guerrero operator+(int aumento, guerrero &t);
        friend guerrero operator++(guerrero &t);
        friend guerrero operator-(guerrero &t, int disminucion);
        // un metodo para generar randoms de ataque y curacion
        int generarRandom(guerrero &t);
        //sobrecargamos el operador -- para quitarle la vida actual al jugador
        friend void operator-=(guerrero &t, int menos);
        friend void operator+=(guerrero  &t, int mas);


};
        /*Segun yo como se uso herencia, no es necesario declarar los atributos de la clase personaje
        std::string nombre;
        std::string descripcion;
        std::string ubicacion;
        bool estatus;
        */

