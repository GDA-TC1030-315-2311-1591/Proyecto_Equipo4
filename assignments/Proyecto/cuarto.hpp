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
        //constructor default
        cuarto();
        //constructor sobrecargado
        cuarto(std::string, item*, personaje*, cuarto*); // esto no se que pedo, pero creo que es un apuntador a un objeto de tipo cuarto.
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_nombre(std::string);//setter de nombre
        std::string get_nombre();//getter de nombre
        void set_item(item*);//setter de item
        item* get_item();//getter de item
        void set_personaje(personaje*);//setter de personaje
        personaje* get_personaje();//getter de personaje
        void set_cuartoSiguiente(cuarto*);//setter de cuarto siguiente
    protected:
        std::string nombre;//nombre del cuarto
        item* item;//item del cuarto
        personaje* personaje;//personaje del cuarto
        cuarto* cuartoSiguiente;//cuarto siguiente

        
}










