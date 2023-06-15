#include"personaje.hpp"
#include<iostream>
#include<string>
#include<vector>
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
    if (estatus == true){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else {//esta muerto por lo que dice esto muerto no puedo hablar
        std::cout << "Estoy muerto, no puedo hablar" << std::endl;
        
    }
}; 

void personaje::imprimecaract(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    //std::cout << "Ubicacion: " << ubicacion << std::endl; No necesitamos ubicacion
    std::cout << "Estatus: " << estatus << std::endl;
};

//metodo juega
/*void juega(){
    std::cout << "Estoy jugando" << std::endl;
};*/



