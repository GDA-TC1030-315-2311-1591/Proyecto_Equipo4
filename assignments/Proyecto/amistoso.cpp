//aqui declaramos las funciones de la clase amistoso

#include "amistoso.hpp"
#include <iostream>
#include <iomanip>
//constructor por default
amistoso::amistoso() : personaje(){

    estatus = false;
    puntos = 0;
    // Resto de la inicialización de atributos, si es necesario
}

//constructor sobrecargado

amistoso::amistoso(std::string _nombre ,std::string _descripcion,  std::string _historia, bool _estatus,int _puntos) {
    nombre = _nombre;
    descripcion = _descripcion;
    //ubicacion = _ubicacion; No necesitamos ubicacion
    historia = _historia;
    estatus = _estatus;
    puntos = _puntos;
    // Resto de la inicialización de atributos, si es necesario
}


//metodos de la clase amistoso getters y setters
void amistoso::set_estatus(bool _estatus){
    estatus = _estatus;
};
bool amistoso::get_estatus(){
    return estatus;
};
void amistoso::set_puntos(int _puntos){
    puntos = _puntos;
};
int amistoso::get_puntos(){
    return puntos;
};
void amistoso::set_historia(std::string _historia){
    historia = _historia;
};
std::string amistoso::get_historia(){
    return historia;
};
//metodos virtuales //Pienso que falta algo aqui en los metodos en el cpp
void amistoso::hablar(){
    if (estatus == true){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else {//esta muerto por lo que dice esto muerto no puedo hablar
        std::cout << "Estoy muerto, no puedo hablar" << std::endl;
    }
};
void amistoso::imprimecaract(){//imprime las caracteristicas del personaje
    std::cout << "--------------------------------------------------------------------------------------------- " << std::endl;
    std::cout << "\033[1mNombre: \033[0m" << nombre << std::endl;
    std::cout << "\033[1mDescripcion: \033[0m" << descripcion << std::endl;
    std::cout << " " << historia;
        if (puntos != 0){
            std::cout << puntos << std::endl;
        }
};

void amistoso::juega(){ //metodo para jugar
    std::cout << "No tengo ganas de jugar." << std::endl;
};

void amistoso::recibeInteraccion(int _interaccion){//metodo para recibir interaccion
    if (_interaccion == 1){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else if (_interaccion == 2){
        std::cout << "No tengo ganas de jugar." << std::endl;
    }
    };
