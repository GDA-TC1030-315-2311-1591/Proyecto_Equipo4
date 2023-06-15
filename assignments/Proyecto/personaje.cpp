#include"personaje.hpp"
#pragma once

personaje::personaje(){//constructor
    nombre = "";
    descripcion = "";
    //ubicacion = ""; No necesitamos ubicacion
    estatus = false;
};

personaje::personaje(std::string _nombre, std::string _descripcion,bool _estatus){//constructor sobrecargado
    nombre = _nombre;
    descripcion = _descripcion;
    //ubicacion = _ubicacion; No necesitamos ubicacion
    estatus = _estatus;
};
//setters y getters

void personaje::set_nombre(std::string _nombre){
    nombre = _nombre;
};
std::string personaje::get_nombre(){
    return nombre;
};
void personaje::set_descripcion(std::string _descripcion){
    descripcion = _descripcion;
};
std::string personaje::get_descripcion(){
    return descripcion;
};

/*No necesitamos ubicacion
void personaje::set_ubicacion(std::string _ubicacion){
    ubicacion = _ubicacion;
};
std::string personaje::get_ubicacion(){
    return ubicacion;
};
*/
void personaje::set_estatus(bool _estatus){
    estatus = _estatus;
};
bool personaje::get_estatus(){
    return estatus;
};
//metodos virtuales //Pienso que falta algo aqui en los metodos en el cpp
void personaje::hablar(){
    std::cout << "Hola, soy " << nombre << " y estoy en " << std::endl;
};
int personaje::juega(){
    return 0;
};
