// la clase personaje es la clase padre de la clase amistoso y guerrero y es la que define a los personajes en general.
// esta es una clase complemento de cuarto, ya que los personajes son los que se encuentran en los cuartos.
// esta igualmente es una clase abstracta, ya que no se puede crear un personaje sin definir si es amistoso o guerrero.
// class personaje 
//#include "item.hpp"
#include <iostream>
#pragma once


class personaje{
    protected:
        //atributos
        //los atributos son el nombre la descripcion y la ubicacion en string.
        std::string nombre;
        std::string descripcion;
        //std::string ubicacion; La quite porque ya no necesitamos ubicacion
        bool estatus;

    public:
        //constructor default
        personaje();
        //constructor con parametros
        //personaje(std::string, std::string, std::string,bool); La quite porque ya no necesitamos ubicacion
        personaje(std::string, std::string,bool);
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_descripcion(std::string);
        std::string get_descripcion();
        //void set_ubicacion(std::string);
        //std::string get_ubicacion();
        void set_estatus(bool);
        bool get_estatus();
        //metodos virtuales
        virtual void hablar(); //metodo virtual 
         int juega(); //metodo virtual puro(es para que tu puedas interactuar, se basa de 1-4 dependiendo de la opcion que sea es )
        virtual void recibeInteraccion(int) = 0; //metodo virtual
        virtual void imprimecaract(); //metodo virtual que imprime las caracteristicas del personaje



    
        
};
