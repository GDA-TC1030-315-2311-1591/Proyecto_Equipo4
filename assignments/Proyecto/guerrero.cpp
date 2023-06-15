/*
Esta clase define a los personajes que son guerreros, es decir, que atacan al jugador.
 Incluyendo al mismo jugador en esta clase, define metodos de ataque y curacion. 
*/
#pragma once
#include "guerrero.hpp"

//Constructores
guerrero::guerrero(){
    puntosSaludTotal = 0;
    puntosSaludActual = 0;
    maxAtaque = 0;
}
guerrero::guerrero(double puntosSaludTotal, double puntosSaludActual, double maxAtaque,std::string _nombre, std::string _descripcion,bool _estatus){
    this->puntosSaludTotal = puntosSaludTotal;
    this->puntosSaludActual = puntosSaludActual;
    this->maxAtaque = maxAtaque;
    this-> nombre = _nombre;
    this-> estatus = _estatus;
    this-> descripcion = _descripcion;
};
void guerrero::set_puntosSaludTotal(double puntosSaludTotal){
    this->puntosSaludTotal = puntosSaludTotal;
}
double guerrero::get_puntosSaludTotal(){
    return puntosSaludTotal;
}
void guerrero::set_puntosSaludActual(double puntosSaludActual){
    this->puntosSaludActual = puntosSaludActual;
}
double guerrero::get_puntosSaludActual(){
    return puntosSaludActual;
}
void guerrero::set_maxAtaque(double maxAtaque){
    this->maxAtaque = maxAtaque;
}
double guerrero::get_maxAtaque(){
    return maxAtaque;
}
void guerrero::set_nombre(std::string _nombre){
    this->nombre = _nombre;
}
std::string guerrero::get_nombre(){
    return nombre;
}
void guerrero::set_descripcion(std::string _descripcion){
    this->descripcion = _descripcion;
}
std::string guerrero::get_descripcion(){
    return descripcion;
}
void guerrero::set_estatus(bool _estatus){
    this->estatus = _estatus;
}
bool guerrero::get_estatus(){
    return estatus;
}
//Metodos virtuales
void guerrero::imprimecaract(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Puntos de salud: " << puntosSaludActual << std::endl;
    std::cout << "Puntos de ataque: " << maxAtaque << std::endl;
}



