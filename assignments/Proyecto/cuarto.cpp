//declaramos la clase cuarto este es el complemeto de personaje ya que los personajes se encuentran en los cuartos.
#include "cuarto.hpp"
#pragma once
//constructor default
cuarto::cuarto(){
    nombre = " ";
    descripcion = " ";
    siguiente = " ";
    //ubicacion = " "; La quite porque ya no necesitamos ubicacion
}
//constructor con parametros
cuarto::cuarto(std::string nombre, std::string descripcion, std::string siguiente){
    this->nombre = nombre;
    this->descripcion = descripcion;
    //this->ubicacion = ubicacion; La quite porque ya no necesitamos ubicacion
}
//metodos
//los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
void cuarto::set_nombre(std::string nombre){
    this->nombre = nombre;
}
std::string cuarto::get_nombre(){
    return nombre;
}
void cuarto::set_descripcion(std::string descripcion){
    this->descripcion = descripcion;
}
std::string cuarto::get_descripcion(){
    return descripcion;
}
//void cuarto::set_ubicacion(std::string ubicacion){
//    this->ubicacion = ubicacion;
//}
//std::string cuarto::get_ubicacion(){
//    return ubicacion;
//}
void cuarto::set_siguiente(std::string siguiente){
    this->siguiente = siguiente;
}
std::string cuarto::get_siguiente(){
    return siguiente;
}
//metodos virtuales
void cuarto::imprimecaract(){
    std::cout<<"Nombre: "<<nombre<<std::endl;
    std::cout<<"Descripcion: "<<descripcion<<std::endl;
    //std::cout<<"Ubicacion: "<<ubicacion<<std::endl;
}







