//en cuarto te sugiero mejor usar apuntador a cuarto en el cuarto siguiente, apuntador a Item y también apuntador a Personaje.
//en cuarto vamos a meter un atributo diamante que es un bool que nos dice si el cuarto tiene diamante o no.
// si tomas el diamante el juego termina y da las gracias con un metodo endgame
// en cuarto vamos a meter un atributo de tipo de cuarto que nos dice si es un cuarto de batalla o de historia.
// el cuarto tiene que tener un nombre, puede tener un item, tiene que tener un personaje, tiene que tener un cuarto siguiente.
#include "personaje.hpp"
#include "item.hpp"
#pragma once
#include <iostream>

class cuarto{
    public:
        //constructor
        cuarto();
        //constructor sobrecargado
        cuarto(std::string, item*, personaje*, cuarto*); // esto no se que pedo, pero creo que es un apuntador a un objeto de tipo cuarto.
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_item(item*);
        item* get_item();
        void set_personaje(personaje*);
        personaje* get_personaje();
        void set_cuartoSiguiente(cuarto*);

        
}










